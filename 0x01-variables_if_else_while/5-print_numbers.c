#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');

	return (0);

}
