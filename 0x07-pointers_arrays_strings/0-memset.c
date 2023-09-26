#include "main.h"
/**
 * _memset- code to fill memory with a constant byte
 * @b: Size of memory block to
 * @n: The constant byte that will fill
 * @s: Pointer to the memory block to be filled
 * Return: the pointer to the memory area s with changed bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;

	}

	return (s);

}
