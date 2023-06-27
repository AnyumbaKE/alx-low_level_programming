#include "main.h"
#include <stdio.h>

/**
  * print_array - function that prints
  * @a: param
  * @n: int
  * Return: 0 Always
  */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
