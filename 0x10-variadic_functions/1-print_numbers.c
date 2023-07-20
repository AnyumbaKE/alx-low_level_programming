#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers -  a function that prints numbers, followed by a new line
  * @n: parameter
  * @separator: pointer
  * Return: 0 Always (Success)
  **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list i;

	va_start(i, n);

	for (x = 0; x < n; ++x)
	{
		printf("%d", va_arg(i, int));

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(i);
	printf("\n");
}
