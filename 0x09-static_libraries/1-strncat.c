#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: 1st string
 * @src: 2nd sting
 * @n: number of strings to concatenate
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}

	dest[x] = '\0';
	return (dest);
}
