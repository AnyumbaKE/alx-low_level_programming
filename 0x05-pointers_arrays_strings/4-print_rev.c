#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string.
 * @s: param
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
