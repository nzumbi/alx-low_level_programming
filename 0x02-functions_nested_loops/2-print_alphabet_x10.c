#include "main.h"

/**
 * prints alphabet lowercase 10 times
 * return - 0
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
