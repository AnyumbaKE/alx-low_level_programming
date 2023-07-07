#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * main - a program that multiplies two numbers
  * @argv: vector
  * @argc: conter
  * Return: 0 Always (Success)
  */

int main(int argc, char *argv[])
{
	int x, y, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	diff = x * y;

	printf("%i\n", diff);

	return (0);
}
