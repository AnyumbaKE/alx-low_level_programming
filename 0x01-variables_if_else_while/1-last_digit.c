#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program to print the last digit
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is : ", n);
	x = n % 10;
	if (x > 5)
	{
		printf("%d and is greater than 5\n", x);
	}
	else if ((x < 6) && (x < 0))
	{
		printf("%d and is less than 6 and not 0\n", x);
	}
	else
	{
		printf("%d and is 0\n", x);
	}
	return (0);
}
