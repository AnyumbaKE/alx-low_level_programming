#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x = '0';
	int y = '0';

	for (y = '0'; y <= '9'; y++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (!((x == y) || (y > x)))
			{
				putchar(y);
				putchar(x);
				if (!(x == '9' && y == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
