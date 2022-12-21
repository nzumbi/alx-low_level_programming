#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first numbber
 * @n2: second number
 * @r: buffer used to store the result
 * @size_r: size of buffer
 * Return: dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, w, t, m, q, add = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	if (x >= y)
		t = x;
	else
		t = y;
	if (size_r <= t + 1)
		return (0);
	r[t + 1] = '\0';
	x--, y--, size_r--;
m = *(n1 + x) - 48, q = *(n2 + y) - 48;
	while (t >= 0)
	{
		w = m + q + add;
		if (w >= 10)
			add = w / 10;
		else
			add = 0;
		if (w > 0)
		*(r + t) = (w % 10) + 48;
		else
			*(r + t) = '0';
		if (x > 0)
			x--, m = *(n1 + x) - 48;
		else
			m = 0;
		if (y > 0)
			y--, q = *(n2 + y) - 48;
		else
			q = 0;
		t--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
