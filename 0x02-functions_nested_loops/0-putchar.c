#include "main.h"

/**
 * main - prints _putchar,
 * follow by a new line.
 * Return: 0
**/

int main(void)
{
	unsigned int task0;
	char a[] = "_putchar";

	for (task0 = 0; task0 <= 7; task0++)
	{
		_putchar(a[task0]);
	}

	_putchar('\n');

	return (0);
}
