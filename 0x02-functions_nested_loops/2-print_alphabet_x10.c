#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10 times
 * Return:  0
**/

void print_alphabet_x10(void)
{
	char x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}

		_putchar('\n');
	}
}
