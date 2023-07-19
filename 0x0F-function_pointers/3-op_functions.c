#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * op_sub - calculates the difference of two integers
 * op_mul - calculates the product of two integers
 * op_div - calculates the division of two integers
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
