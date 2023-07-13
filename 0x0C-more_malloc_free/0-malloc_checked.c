#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: a pointer to the allocated memory
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);

}
