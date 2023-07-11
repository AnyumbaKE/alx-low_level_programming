#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac:string pointer
 * @av: string
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	size_t total_length;
	char *result;
	char *current;
	int x;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (x = 0; x < ac; x++)
		total_length += strlen(av[x]) + 1;

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	current = result;
	for (x = 0; x < ac; x++)
	{
		strcpy(current, av[x]);
		current += strlen(av[x]);
		*(current++) = '\n';
	}

	*current = '\0';

	return (result);
}
