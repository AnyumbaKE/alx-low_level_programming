#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: param
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len;
	int x;
	int half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)

	x = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - x - 1];
		s[len - x - 1] = s[x];
		s[x] = temp;
		x++;
	}
}
