#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x =  sizeof(unsigned long int) * 8;
	unsigned int y, z = 0;

	for (y = 0; y < x; y++)
	{
		if ((m & 1) != (n & 1))
			z += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (z);
}
