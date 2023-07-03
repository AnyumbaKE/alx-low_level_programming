#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: search
 * @accept: matches
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
		x++;
	}
	return (NULL);
}
