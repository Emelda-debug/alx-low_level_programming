#include "main.h"
/**
 * binary_to_uint- function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			x = (x << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (x);
}
