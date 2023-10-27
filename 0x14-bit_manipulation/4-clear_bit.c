#include "main.h"
/**
 * clear_bit- function that sets the value of
 * a bit to 0 at a given index
 * @n: pointer to set value
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	x = 1 << index;
	if (*n & m)
	{
		*n = n ^ m;
		if (index > 63)
		{
			return (-1);
		}
	}
	return (1);
}

