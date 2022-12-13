#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return - 1 if c is lowercase,
 * Return - o if otherwise
 * @c: character to check
**/

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
