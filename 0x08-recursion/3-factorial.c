#include "main.h"
/**
 * factorial- function that returns the factorial of a given number
 * @n: variable for the number whose factorial will be calculated
 * Return: always 0 success
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}


	return (n * factorial(n - 1));

}

