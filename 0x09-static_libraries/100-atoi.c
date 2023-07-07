#include "main.h"
#include <stdio.h>

/**
 * _atoi - function converts string to an integer
 * @s: para
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, y = 0, k = 1, m = 1, x;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (x = count - size; x < count; x++)
	{
		y = y + ((*(s + x) - 48) * m);
		m /= 10;
	}
	return (y * k);
}
