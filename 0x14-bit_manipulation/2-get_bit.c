#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index starting from 0
 * Return: the value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > 53)
	{
		return (-1);
	}

	mask <<= index;
	return ((n & mask) ? 1 : 0);
}
