#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: terminated string to add at the end of the file
 * Return: Always 0 sucess
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int z = 0;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);
	if (x < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[z])
			z++;

		y = write(x, text_content, z);
		close(x);
		return (y == -1 ? -1 : 1);
	}

	close(x);
	return (1);
}
