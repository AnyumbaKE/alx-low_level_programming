#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for value in a sorted array of integers
 * @array: element of the array
 * @left: the starting index of the [sub]array to search
 * @right: the ending index of the [sub]array to search
 * @value:  the value to search for
 * Return: value of index or -1 for NULL
 **/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, left, x, value));
	return (advanced_binary_recursive(array, x + 1, right, value));
}

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: element of the array
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: value of index or -1 for NULL
 **/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
