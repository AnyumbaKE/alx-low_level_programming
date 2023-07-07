#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in a string
 * @s: search
 * @c: character
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != c && s[x] != '\0')
		x++;
	if (s[x] == c)
		return (&s[x]);
	else
		return (NULL);
}
