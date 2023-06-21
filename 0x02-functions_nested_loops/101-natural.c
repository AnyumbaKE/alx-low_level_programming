#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum = 0;
	int num;

	for (num = 0; num < 1024; ++num)
	{
	if ((num % 3 == 0) || (num % 5 == 0))
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
