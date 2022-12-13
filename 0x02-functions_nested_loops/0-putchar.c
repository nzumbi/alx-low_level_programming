#include "main.h"

/**
 * main - prints _putchar,
 * follow by a new line.
 * Return: 0
**/

int main(void)
{
	unsigned int x;
	char a[] = "_putchar";

	for (x = 0; x <= 7; x++)
	{
		_putchar(a[x]);
	}

	_putchar('\n');

	return (0);
}
