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
	int x;
	int y;
	ssize_t write_result;
	char *buffer;

	if (!filename || !letters)
		return (0);

	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(x);
		return (0);
	}

	y = read(x, buffer, letters);
	if (y < 0)
	{
		free(buffer);
		close(x);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, y);
	free(buffer);
	close(x);

	if (write_result != y)
		return (0);

	return (y);
}
