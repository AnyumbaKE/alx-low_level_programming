#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the alphabet in lowercase &  uppercas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int al = 'a';
	int AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
