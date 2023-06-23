#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 Always (Success)
 */
int main(void)
{

	unsigned long int x = 3, number = 612852475143;

	for (; x < 12057; x += 2)
	{
		while (number % i == 0 && number != x)
			number /= x;
	}
	printf("%lu\n", number);
	return (0);
}
