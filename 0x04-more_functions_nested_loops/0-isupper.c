#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: the character
 * Return: 0 Always (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
