#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bc;

	for (bc = 0; bc < n && src[bc] != '\0'; bc++)
	{
		dest[bc] = src[bc];
	}
	for (; bc < n; bc++)
	{
		dest[bc] = '\0';
	}
	return (dest);
}
