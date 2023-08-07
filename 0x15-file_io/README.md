		**FILE DESCRIPTOR**

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams:

Integer value	Name	<unistd.h> symbolic constant[1]	<stdio.h> file stream
0	Standard input	STDIN_FILENO	stdin
1	Standard output	STDOUT_FILENO	stdout
2	Standard error	STDERR_FILENO	stderr

**Operations on file descriptors**

The following lists typical operations on file descriptors on modern Unix-like systems. Most of these functions are declared in the <unistd.h> header, but some are in the <fcntl.h> header instead.

**Creating file descriptors**

open()
creat()[5]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux)
signalfd() (Linux)
eventfd() (Linux)
timerfd_create() (Linux)
memfd_create() (Linux)
userfaultfd() (Linux)
fanotify_init() (Linux)
inotify_init() (Linux)
clone() (with flag CLONE_PIDFD, Linux)
pidfd_open() (Linux)
open_by_handle_at() (Linux)
kqueue() (BSD)
pdfork() (kFreeBSD)
Deriving file descriptors
dirfd()
fileno()

**Operations on a single file descriptor**

read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
recvmsg(), sendmsg() (also used for sending FDs to other processes over a Unix domain socket)
recvmmsg(), sendmmsg()
lseek(), llseek()
fstat()
fstatvfs()
fchmod()
fchown()
ftruncate()
fsync()
fdatasync()
fdopendir()
fgetxattr(), fsetxattr() (Linux)
flistxattr(), fremovexattr() (Linux)
statx (Linux)
setns (Linux)
vmsplice() (Linux)
pidfd_send_signal() (Linux)
waitid() (with P_PIDFD ID type, Linux)
fdopen() (stdio function:converts file descriptor to FILE*)
dprintf() (stdio function: prints to file descriptor)

**Operations on multiple file descriptors**

select(), pselect()
poll(), ppoll()
epoll_wait(), epoll_pwait(), epoll_pwait2() (Linux, takes a single epoll filedescriptor to wait on many other file descriptors)
epoll_ctl() (for Linux)
kqueue() (for BSD-based systems).
sendfile()
splice(), tee() (for Linux)
copy_file_range() (for Linux)
close_range() (for Linux)[6]
Operations on the file descriptor table
The fcntl() function is used to perform various operations on a file descriptor, depending on the command argument passed to it. There are commands to get and set attributes associated with a file descriptor, including F_GETFD, F_SETFD, F_GETFL and F_SETFL.

close()
closefrom() (BSD and Solaris only; deletes all file descriptors greater than or equal to specified number)
dup() (duplicates an existing file descriptor guaranteeing to be the lowest number available file descriptor)
dup2(), dup3() (Close fd1 if necessary, and make file descriptor fd1 point to the open file of fd2)
fcntl (F_DUPFD)
Operations that modify process state
fchdir() (sets the process's current working directory based on a directory file descriptor)
mmap() (maps ranges of a file into the process's address space)

**File locking**

flock()
fcntl() (F_GETLK, F_SETLK and F_SETLKW)
lockf()
Sockets
See also: Berkeley sockets
connect()
bind()
listen()
accept() (creates a new file descriptor for an incoming connection)
getsockname()
getpeername()
getsockopt()
setsockopt()
shutdown() (shuts down one or both halves of a full duplex connection)
Miscellaneous
ioctl() (a large collection of miscellaneous operations on a single file descriptor, often associated with a device)
Upcoming operations
A series of new operations on file descriptors has been added to many modern Unix-like systems, as well as numerous C libraries, to be standardized in a future version of POSIX.[7] The at suffix signifies that the function takes an additional first argument supplying a file descriptor from which relative paths are resolved, the forms lacking the at suffix thus becoming equivalent to passing a file descriptor corresponding to the current working directory. The purpose of these new operations is to defend against a certain class of TOCTOU attacks.

openat()
faccessat()
fchmodat()
fchownat()
fstatat()
futimesat()
linkat()
mkdirat()
mknodat()
readlinkat()
renameat()
symlinkat()
unlinkat()
mkfifoat()
fdopendir()

**File descriptors as capabilities**

Unix file descriptors behave in many ways as capabilities. They can be passed between processes across Unix domain sockets using the sendmsg() system call. Note, however, that what is actually passed is a reference to an "open file description" that has mutable state (the file offset, and the file status and access flags). This complicates the secure use of file descriptors as capabilities, since when programs share access to the same open file description, they can interfere with each other's use of it by changing its offset or whether it is blocking or non-blocking, for example.[8][9] In operating systems that are specifically designed as capability systems, there is very rarely any mutable state associated with a capability itself.
