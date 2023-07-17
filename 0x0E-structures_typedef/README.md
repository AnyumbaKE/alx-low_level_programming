A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

The C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries. It corresponds to the similarly named feature available in some assemblers for Intel processors. Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Because the contents of a struct are stored in contiguous memory, the sizeof operator must be used to get the number of bytes needed to store a particular type of struct, just as it can be used for primitives. The alignment of particular fields in the struct (with respect to word boundaries) is implementation-specific and may include padding, although modern compilers typically support the #pragma pack directive, which changes the size in bytes used for alignment.


