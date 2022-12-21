
#include "main.h"
/**
 * rot13 - uses rot 13 to encode a string
 * @str: input string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(str + count) != '\0')
{

for (a = 0; a < 52; a++)
{
if (*(str + count) == alphabet[a])
{
*(str + count) = rot13[a];
break;
}
}
count++;
}

return (str);
}
