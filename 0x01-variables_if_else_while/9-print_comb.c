#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints single digits of base 10
 * starting from 0, follow with a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
