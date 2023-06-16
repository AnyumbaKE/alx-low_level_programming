#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';
	char al = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}

	putchar('\n');

	return (0);
}
