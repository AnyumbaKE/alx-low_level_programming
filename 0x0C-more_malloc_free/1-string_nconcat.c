#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: pointer
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w = 0, x = 0, y, z;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[w] != '\0')
		w++;

	while (s2[x] != '\0')
		x++;

	n = (n >= x) ? x : n;

	result = malloc(w + n + 1);
	if (result == NULL)
		return (NULL);

	for (y = 0; y < w; y++)
		result[y] = s1[y];

	for (z = 0; z < n; z++)
		result[y + z] = s2[z];

	result[y + z] = '\0';

	return (result);
}
