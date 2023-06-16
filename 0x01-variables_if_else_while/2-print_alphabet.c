#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
