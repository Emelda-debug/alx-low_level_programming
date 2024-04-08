#include "main.h"
/**
 * _strcat- function thst concatenates 2 strings
 * @dest: destination of concateated string
 * @src: source of concatenating strings
 * Return: always 0 success
 */

char *_strcat(char *dest, char *src)

{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}

