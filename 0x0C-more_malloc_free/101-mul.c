#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- program that multiplies two positive numbers
 * Return: product of num1 and num2
 */

int main(void)
{
	unsigned int num1, num2, product;
	char *a;
	int x;

	product = num1 * num2;

	while (a[x])
	{
		if (a[x] < '0' || a[x] > '9')
	{
		return (0);
	}
	x++;
	}
}
/**
 * main- program that multiplies two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: product of 2 numbers
 */

int main(int argc, char *argv)

{
	char *x, *y;

	x = argv[1], y = argv[2];

	if (argc != 2)
	{
		_putchar("ERROR'\n);
		return (98);
	}
	_putchar(product);
	return (0);
}


