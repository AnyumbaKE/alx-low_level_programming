#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * @s: string
 * Return: Always 0.
 */

char *leet(char *s)
{
	int count = 0, x;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + count) != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (*(s + count) == lower_case[x] || *(s + count) == upper_case[x])
			{
				*(s + count) = numbers];
				break;
			}
		}
		count++;
	}

	return (s);
}
