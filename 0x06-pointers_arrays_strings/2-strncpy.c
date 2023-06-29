#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: 1st string
 * @src: 2nd sting
 * @n: number of strings to concatenate
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
