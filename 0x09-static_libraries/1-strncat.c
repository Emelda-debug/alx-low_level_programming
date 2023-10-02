#include "main.h"
/**
 * _strncat- function that concatenates 2 strings
 * using n bytes at most from src
 * @dest: destination of concatenated strings
 * @src: source of concatenated string
 * @n: number of bytes to be used for concatenation
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)

{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (y < n && src[x] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}

