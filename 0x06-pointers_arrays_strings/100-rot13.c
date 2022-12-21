
#include "main.h"
/**
 * rot13 - uses rot 13 to encode a string
 * @s: input string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{

for (a = 0; a < 52; a++)
{
if (*(s + count) == alphabet[a])
{
*(s + count) = rot13[a];
break;
}
}
count++;
}

return (s);
}
