#include "main.h"

/**
 * rev_string - reverse a string.
 *@s: the input string
 * Return: no return
 */

void rev_string(char *s)
{
	int length, x, y;
	char a, b;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	x = length - 1;
	y = 0;

	while (x > y)
	{
		a = s[y];
		b = s[x];
		s[y] = b;
		s[x] = a;
		x--;
		y++;
	}
}
