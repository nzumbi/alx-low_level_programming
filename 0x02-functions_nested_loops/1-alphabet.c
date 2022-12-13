#include "main.h"

/**
 * print_alphabet -in lowercase,
 * follow by a new line.
**/

void print_alphabet(void)
{
	char task1;

	for (task1 = 'a'; task1 <= 'z'; task1++)
	{
		_putchar(task1);
	}

	_putchar('\n');
}
