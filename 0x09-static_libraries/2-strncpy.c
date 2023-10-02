#include "main.h"
/**
 * _strcmp - function that compares 2 string values
 * @s1: input string to be compared
 * @s2: second input string to be compared
 * Return: always 0 success
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);

}
