#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: The character to be checked
 * Return: unsigned int value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);

