#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of line to be drawn
 */

void print_line(int n)
{
	int x = 1;

	while (x <=  n)
	{
		_putchar(95);
		x++;
	}
	_putchar('\n');
}
