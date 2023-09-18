#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s:bytes of the memory area pointed
 * @b:the constant byte
 * @n:function fills the first
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
