#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- function that allocates memory for an array
 * @nmemb: elements in array
 * @size: size of each element
 * Return: if malloc fails,
 * calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x, *b;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);
	b = x;
	for (a = 0; a < nmemb * size; a++)
	{
		b[a] = 0;
	}
	return (x);
}
