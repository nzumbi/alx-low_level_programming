#include "main.h"
/**
 * rot13 - uses rot 13 to encode a string
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int count = 0, x;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (*(s + count) == alphabet[x])
			{
				*(s + count) = rot13[x];
				break;
			}
		}
		count++;
	}

	return (s);
}
