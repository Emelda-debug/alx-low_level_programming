#include "main.h"
/**
 * _strspn- function that gets the length of a prefix substring
 * @s: string input
 * @accept: input where bytes are to be considered
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int y = 0;
	int x;

	while (*s)

		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				x++;

				break;
			}
			else if (accept[x + 1] == '/0')
			{
				return (x);
			}
			s++;
		}
	return (x);
}
