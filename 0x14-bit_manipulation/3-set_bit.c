#include <stdio.h>
#include "main.h"

/**
  * set_bit - a function that sets the value of a bit to 1 at a given index
  * @n: unsigned long int
  * @index: index starting from 0
  * Return: 1 if it worked, or -1 if an error occurred
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}
