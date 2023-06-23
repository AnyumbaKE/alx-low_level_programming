#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Return: 0 Always (Success)
 */

void print_square(int size)
{
	int x = 0, y;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar(#);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
