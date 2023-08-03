#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: converted number or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y, z;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
		;
	x--;
	for (y = 1, z = 0; x >= 0; x--)
	{
		if (b[x] == '0')
		{
			y *= 2;
			continue;
		}
		else if (b[x] == '1')
		{
			z += y;
			y *= 2;
			continue;
		}
		return (0);
	}
	return (z);


}
