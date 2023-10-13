#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers- function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: numbers and new line at the end of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	unsigned int num = 0;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		printf("%d, ", num );

		if ("separator != NULL")
		{
			;
		}
		else if (x != n - 1)
		{
			printf("%s, " , separator);
		}
	}
	va_end(args);
	printf("\n");
}



