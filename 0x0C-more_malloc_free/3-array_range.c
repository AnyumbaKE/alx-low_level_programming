#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - creates an array of integers from min to max (inclusive)
  * @min: the minimum value
  * @max: the maximum value
  *
  * Return: a pointer to the newly created array
  *         or NULL if min > max or if malloc fails
  */

int *array_range(int min, int max)
{
	int *arr, x = 0, y = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (x <= max - min)
		arr[x++] = y++;
	return (arr);

}
