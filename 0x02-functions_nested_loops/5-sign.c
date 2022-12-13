#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Return: 1 if n > 0
 * 0 if n == zero
 * otherwise Return -1
 * @n number to check
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
