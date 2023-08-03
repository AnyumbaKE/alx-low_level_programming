#include <stdio.h>
#include "main.h"

/**
 *get_endianness - a function checks foe endianness
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *y = (unsigned char *)&x;

	if (*y)
		return (1);
	else
		return (0);
}
