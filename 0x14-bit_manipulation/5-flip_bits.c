#include "main.h"
/**
 * flip_bits- function that returns the number of bits
 * needed to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			x++;
		}
	}
	return (x);
}
