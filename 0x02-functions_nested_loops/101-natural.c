#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum_x;
	unsigned long int sum_y;
	unsigned long int sum;
	int a;

	sum_x = 0;
	sum_y = 0;
	sum = 0;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			sum_x = sum_x + a;
		} else if ((a % 5) == 0)
		{
			sum_y = sum_y + a;
		}
	}
	sum = sum_x + sum_y;
	printf("%lu\n", sum);
	return (0);
}
