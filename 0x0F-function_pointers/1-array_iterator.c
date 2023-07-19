#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: Name of the array in which the function acts on.
 * @size: size of the passed array to function
 * @action: function that acts on the array elements
 * Return: 0 Always
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (!array || !action)
		return;

	for (x = 0; x < size; ++x)
	{
		action(array[x]);
	}
}
