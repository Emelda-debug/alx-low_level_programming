#include "main.h"
/**
 * _strpbrk- function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: where bytes will be located from
 * Return: the pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
