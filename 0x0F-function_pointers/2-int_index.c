#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 * Return: 0 Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
