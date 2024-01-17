#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * @array: element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: value of index or -1 for NULL
 **/
int _binary_search(int *array, size_t size, int value)
{
	size_t x, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: value of index or -1 for NULL
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x / 2, right, value));
}
