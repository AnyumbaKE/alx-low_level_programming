#include "main.h"

/**
 * print_triangle - create triangle
 * @size: s the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Return: 0 Always (Success)
 */

void print_triangle(int size)
{
	int x = 0, y, z = size - 1;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < z)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
