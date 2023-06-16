#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');

	return (0);
}
