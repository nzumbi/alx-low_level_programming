#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: input array to print
 * @n: input length of array
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
