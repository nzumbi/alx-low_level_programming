

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - largest prime factor of the number
 * @x: parameter integer
 * No return
 */


void print_number(int x)
{

	unsigned int x1 = 0;

	if  (x < 0)
	{
		x1 = -x;
		_putchar('-');
	}

	else
	{
		x1 = x;
	}

	if (x1 / 10)
	{
		print_number(x1 / 10);
	}

	_putchar((x1 % 10) + '0');
}
