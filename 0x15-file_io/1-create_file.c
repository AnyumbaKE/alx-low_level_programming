#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int x, write_result, text_length;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;
		write_result = write(x, text_content, text_length);
		close(x);
		return (write_result == -1 ? -1 : 1);
	}

	close(x);
	return (1);

}
