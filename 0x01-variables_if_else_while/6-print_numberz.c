#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}

