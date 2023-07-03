#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * @a: matrix
 * @size: matrix size
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x;
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;


	for (x = 0; x < size; x++)
	{
		diagonal_sum_1 += a[x * size + x];
		diagonal_sum_2 += a[(x + 1) * size - (x + 1)];
	}
	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
