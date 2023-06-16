#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets in both lower & uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char al = 'a';

	while (al <= 'z')
	{
		if ((al != 'e') && (al != 'q'))
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
