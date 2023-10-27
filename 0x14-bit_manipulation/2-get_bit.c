#include "main.h"
/**
 * get_bit- function that returns the value of a bit at a given index
 * @n: bit value
 * @index: index
 * Return: bit value at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}
