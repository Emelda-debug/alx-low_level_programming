#include "main.h"
#include <stddef.h>
/**
 * _strchr- function that locates a character in a string
 * @s: string where character will be located
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (0);
			s++;
		}
		else
		{
		}
	}
	return (NULL);
}


