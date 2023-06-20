#include "main.h"

/**
 * print_sign - checks if a character is lowercase.
 * @n: The character to be checked
 * Return: 1 for lowercase or 0 for non-lowercase
 */

int print_sign(int n)
{
	int trial;

	if (n > 0)
	{
		trial = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		trial = 0;
		_putchar('0');
	}
	else
	{
		trial = -1;
		_putchar('-');
	}
	return (trial);
}
