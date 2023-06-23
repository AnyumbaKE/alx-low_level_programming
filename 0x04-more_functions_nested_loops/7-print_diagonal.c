#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times to print
 */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n > 0)
	{
		for (; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
