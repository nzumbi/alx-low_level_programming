#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 * Return - 1 if c is a letter,
 *otherwise Return - 0
 * @c: character to check
**/

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
