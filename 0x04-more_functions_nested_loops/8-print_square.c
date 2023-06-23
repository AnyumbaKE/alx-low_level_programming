#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Return: 0 Always (Success)
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

