#include <stdio.h>
#include "main.h"
/**
  * main - a program that prints its name
  * @argv: vector
  * @argc: conter
  * Return: 0 Always (Success)
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
