#include <stdio.h>
/**
 * main - main block
 *
 * values <= 4,000,000
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x = 0, y = 1, z = 0;
	int sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%i\n", sum);
	return (0);
}
