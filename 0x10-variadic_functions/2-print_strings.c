#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings -  a function that prints strings, followed by a new line
  * @n: parameter
  * @separator: pointer
  * Return: 0 Always (Success)
  **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list i;
	char *str;

	va_start(i, n);

	for (x = 0; x < n; ++x)
	{
		str = va_arg(i, char *);

		if (x > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
	}

	va_end(i);
	printf("\n");
}
