#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: value of index or -1 for NULL
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t x, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
