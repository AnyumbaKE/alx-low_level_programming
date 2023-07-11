#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *           containing a copy of the string given as a parameter
 * @str: string
 * Return: pointer to the duplicated string, or NULL
 */

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	duplicate = (char *)malloc(length);

	if (duplicate != NULL)
		strcpy(duplicate, str);

	return (duplicate);
}
