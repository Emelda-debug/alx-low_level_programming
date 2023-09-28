#include "main.h"

int _example_sqrt_recursion(int n, int b);

/**
 * _sqrt_recursion-  function that returns the
 * natural square root of a number
 * @n: the variable for the number whose
 * square root will be determined
 * Return: always 0 success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_example_sqrt_recursion(n, 0));
	}
}

/**
 *  _example_sqrt_recursion- Function to demonstrate square root
 *  of a natural number recursively
 *  @n: number whose square root will be calculated
 *  @b: the iterator
 *  Return: the square root of a
 */

int _example_sqrt_recursion(int n, int b)
{
	if (b * b > n)
	{
		return (-1);
	}
	if (b * b == n)
	{
		return (b);
	}
	return (_example_sqrt_recursion(n, b + 1));
}
