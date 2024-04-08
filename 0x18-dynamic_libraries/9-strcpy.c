#include "main.h"
/**
 * char *_strcpy- function that copies the string pointed to by src
 * @dest: destination of copied file
 * @src: source of content to be copied
 * return: char *_strcpy the pointer to destination
 *
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while ((*src + y) != '\0')
	{
		y++;
	}

	for ( ; z < y; z++)
	{
		dest[z] = src[z];
	}

	dest[y] = '\0';
	return (dest);
}
