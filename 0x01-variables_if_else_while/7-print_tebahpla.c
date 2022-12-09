#include <stdio.h>

/**
* main - Print reversed lower case letters
*
* Return: Always 0
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
