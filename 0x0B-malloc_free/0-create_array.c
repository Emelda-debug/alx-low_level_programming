#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array- function that creates an array of chars
 * and initializes it with a specific char
 * @c: input variable
 * @size: size of the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;

	char *p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
		p[x] = c;

	return (p);
}

