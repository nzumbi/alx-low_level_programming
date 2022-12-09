#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of digits 0,1,2.
 * Numbers be separated by commas and space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of digits 0,1,2.
 * printin ascending order.
 * use `putchar` to print to console.
 * `putchar` up to 6 times.
 * variables of type `char` not allowed
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;

	for (w = 0; w < 1000; w++)
	{
		x = w / 100;
		y = (w / 10) % 10;
		z = w % 10;

		if (x < y && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');

			if (w < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
