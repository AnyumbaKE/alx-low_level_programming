#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int x;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	relloc = malloc(new_size);

	if (relloc == NULL)
	{
		return (0);
	}
	for (x = 0; x < (old_size || x < new_size); x++)
	{
		*(relloc + x) = clone[x];
	}
	free(ptr);

	return (relloc);
}
