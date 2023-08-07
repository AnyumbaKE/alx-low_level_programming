#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads into to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: Always 0 success
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild, chk;
	ssize_t write_result;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fild);
		return (0);
	}

	chk = read(fild, buffer, letters);
	if (chk < 0)
	{
		free(buffer);
		close(fild);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, chk);
	free(buffer);
	close(fild);

	if (write_result != chk)
		return (0);

	return (chk);
}
