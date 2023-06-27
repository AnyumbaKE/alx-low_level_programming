#include "main.h"
#include <stdio.h>

/**
  * swap_int - swaps the values of two integers.
  * int x: will accept the swapped value
  * @a: first integer
  * @b: second integer
  * Return: Always 0 (Success)
  */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
