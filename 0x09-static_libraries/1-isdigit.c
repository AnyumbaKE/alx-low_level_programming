#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character
 * Return: 0 Always (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
