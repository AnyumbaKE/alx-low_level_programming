#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - a program that adds positive numbers
  * @argv: vector
  * @argc: conter
  * Return: 0 Always (Success)
  */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
