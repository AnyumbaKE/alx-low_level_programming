#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @r: The character to be checked
 * Return: value of the last digits
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}

