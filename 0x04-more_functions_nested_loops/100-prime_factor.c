#include "main.h"
#include <stdio.h>

/**
 * print_number - largest prime factor of the number
 * Return: Success Always
 */


int main(void)
{
	int x = 612852475143;
	int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
