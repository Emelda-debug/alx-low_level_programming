#include "main.h"
int example_prime(int n, int b);
/**
 * is_prime_number- function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input integer
 * Return: always 0 success
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (example_prime(n, n - 1));
}
/**
 * example_prime- numerical example of prime number recursively
 * @n: number to be evaluated
 * @b: iterator
 * Return: 1 if a is prime and otherwise return 0
 */
int example_prime(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (n % b == 0 && n > 0)
	{
		return (0);
	}
	return (example_prime(n, b - 1));
}
