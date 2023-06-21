#include <stdio.h>

/**
 * main - something
 * Return: something
 */

int main(void)
{
	int x = 0;
	long y = 1;
	long z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%ld", y);
		else if (i == 1)
			printf(", %ld", z);
		else
		{
			z += y;
			y = x - y;
			printf(", %ld", z);
		}
		++x
	}
	printf("\n");
	return (0);
}
