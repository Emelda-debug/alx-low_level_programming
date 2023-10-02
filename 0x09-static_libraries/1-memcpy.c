#include "main.h"
/**
 * _memcpy- function that copies memory area
 * @dest: destination area where the bytes will be copied
 * @src: source area from where the bytes will be copied
 * @n: number of bytes to be copied
 * Return: pointer to the destination with newly copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
