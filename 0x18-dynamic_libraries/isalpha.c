#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter.
 * @c: The character to be checked
 * Return: 1 for lowercase or 0 for non-lowercase
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
