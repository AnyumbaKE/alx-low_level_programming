#include <stdio.h>
#include <stdlib.h>

/**
 * validate_input - checks the input
 * @num: number
 * Return: 0 Always (Success)
 **/

int validate_input(const char *num)
{
	while (*num != '\0')
	{
		if (*num < '0' || *num > '9')
			return (0);
		num++;
	}
	return (1);
}

/**
 * main - defines a sting in numbers
 * @argc: Pointer
 * @argv: pointer to string
 * Return: 0 Always (Success)
 **/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char result_str[12];
	int index = 0;

	if (argc != 3)
	{
		fputs("Error\n", stdout);
		return (98);
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2]))
	{
		fputs("Error\n", stdout);
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	while (result > 0)
	{
		result_str[index++] = '0' + (result % 10);
		result /= 10;
	}
	if (index == 0)
		result_str[index++] = '0';
	while (index > 0)
		putchar(result_str[--index]);

	putchar('\n');

	return (0);
}
