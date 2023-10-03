#include <stdio.h>
#include "main.h"
/**
 * _atoi- function that converts string to an integer
 * @s: string to be converted
 * Return: always 0 success
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
		length++;

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;
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
/**
 * main- program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return:product of 2 numbers
 */
int main(int argc, char *argv[])
{
	int x, y, mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	mult = x * y;
	printf("%d\n", mult);
	return (0);
}



