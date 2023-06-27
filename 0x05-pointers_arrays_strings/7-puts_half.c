#include <stdio.h>
#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: param
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int count = 0, x;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		x = count / 2;
	else
		x = (count - 1) / 2;
	for (x++; x < count; x++)
		_putchar(str[x]);

	_putchar('\n');
}
