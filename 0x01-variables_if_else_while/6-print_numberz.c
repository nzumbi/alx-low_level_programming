#include <stdio.h>

/**
* main - use putchar to print single digit numbers
*
* Return: Always
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
