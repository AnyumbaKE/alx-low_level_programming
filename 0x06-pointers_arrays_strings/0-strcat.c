#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: 1st string
 * @src: 2nd sting
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}

	dest[x] = '\0';
	return (dest);
}
