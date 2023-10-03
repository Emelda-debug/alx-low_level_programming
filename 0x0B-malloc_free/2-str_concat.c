#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat- function that concatenates 2 strings
 * @s1: input string
 * @s2: input string
 * Return: pointer to the newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	size_t length1 = strlen(s1);
	size_t length2 = strlen(s2);

	char *result = malloc(sizeof(char) * length1 + length2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
