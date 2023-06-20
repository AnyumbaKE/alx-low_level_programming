#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: the provided value by the user
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if (n < 0 || n >= 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = (x * y);
			if (y == 0)
				_putchar('0' + product);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
		}
		_putchar('\n');
	}
}
