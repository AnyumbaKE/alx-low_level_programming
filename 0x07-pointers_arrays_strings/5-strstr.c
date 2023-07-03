#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - a function that locates a substring
 * @haystack:search
 * @needle: target
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
