#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random password
 * Return: 0.
 */

int main(void)
{
	int ascii_value = 2772, x = 0, y, random;
	char my_password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii_value > 126)
	{
		random = rand() % 126;
		my_password[x] = random;
		ascii_value -= random;
		x++;
	}
	if (ascii_value > 0)
		my_password[x] = ascii_value;
	else
	{
		x--;
	}
	

	for (y = 0; y <= x; y++)
	{
		printf("%c", my_password[y]);
	}
	return (0);
}
