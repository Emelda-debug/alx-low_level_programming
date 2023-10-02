#include "main.h"
/**
 * _atoi- function that converts a string to integer
 * @s: string to be converted
 * Return: return 0 and c, to show converted int from string
 *
 */

int _atoi(char *s)
{
	int a, b, c, length, d, digit;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}


