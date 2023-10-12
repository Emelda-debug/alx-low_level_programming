#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- function that returns the sum of all its parameters
 * @n: additional parameters that will be passed
 * Return: sum of parameters and
 * if n == 0, returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

