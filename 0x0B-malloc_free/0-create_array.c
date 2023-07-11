#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: char to be assigned
 * @size: the size of the memory to print
 * Return: NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
