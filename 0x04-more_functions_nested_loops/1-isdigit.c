#include "main.h"

/**
*_isdigit - checks whether a  character is a digit
*@c: character to test
*Return: 1 if it is, otherwise 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
