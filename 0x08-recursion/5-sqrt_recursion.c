#include "main.h"
/**
 * _sqrt_recursion-  function that returns the
 *  natural square root of a number
 *  @n: the variable for the number whose
 *  square root will be determined
 *  Return: always 0 success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n / (n - 1)));
	}

}
/**
 * example_sqrt_recursion- actual numeric demonstration of recursion
 * @a: number wjose square root will be calculated
 * @b: the iterator
 * Return: the square root of a
 */
int example_sqrt_recursion(int n,int a,int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (a);
	}
	return (example_sqrt_recursion(a, b + 1));

}
