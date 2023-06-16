#include <stdio.h>

/**
 * main - returns all possible combinations of a singel digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);

}
