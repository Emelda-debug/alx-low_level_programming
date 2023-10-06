#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat- function that concatenates two strings
 * @s1: string to be concatenated
 * @s2: second string to be concatenated
 * @n: first bytes of s2 that will be concatenated
 * Return: concatenated sum
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int a, b, sum;
	char *x;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0' && s2_len < n)
	{
		s2_len++;
	}
	sum = s2_len + n;

	x = malloc(sizeof(char) * sum + 1);

	if (x == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < s1_len; a++)
	{
		x[a] = s1[a];
	}
	for (b = 0; b < n; a++, b++)
	{
		x[a] = s2[a];
	}
	x[a] = '\0';
	return (x);
}



