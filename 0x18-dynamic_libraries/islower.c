#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked
 * Return: 1 for lowercase or 0 for non-lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
