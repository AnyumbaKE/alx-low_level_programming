#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  a function that copies memory area
 * @dest: memory area destinaion
 * @src: memory area sourse
 * @n:bytes
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
