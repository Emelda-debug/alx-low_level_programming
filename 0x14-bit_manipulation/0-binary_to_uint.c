#include "main.h"
/**
 * binary_to_uint- function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x, y;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		;
	}
	for (x--; y = 1; x >= 0; x--; y *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		if (b[x] & 1)
		{
			result = result + y;
		}
	}
	return (result);
}
