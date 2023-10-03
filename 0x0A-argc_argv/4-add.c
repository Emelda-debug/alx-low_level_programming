#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_number- function to check if input is a digit or not
 * @s: input
 * Return: 0 always success
 */

int check_number(char *s)
{
	if (s == NULL || *s == '\0')
	{
		printf("0\n");
	}
	while (*s != '\0')
	{
		s++;
	}
	return (0);
}
/**
 * main- program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: the sum of digits
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	sum = 0;
	x = 1;

	while (x < argc)
	{
		if (!check_number(argv[x]))
		{
			y = atoi(argv[x]);
			sum = sum + y;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
