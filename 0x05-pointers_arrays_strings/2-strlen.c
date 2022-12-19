
#include "main.h"

/**
 * _strlen - calculates and returns the length of a string.
 * @s: input string to calculate its length.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
