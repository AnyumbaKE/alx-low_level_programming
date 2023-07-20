#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - a function that returns the sum of all its parameters.
  * @n: parameter
  * Return: 0 Always (Success)
  **/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list i;

	va_start(i, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; ++x)
	{
		sum += va_arg(i, int);
	}

	va_end(i);
	return (sum);

}
