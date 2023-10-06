#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- function that allocates memory using malloc
 * @b: input variable
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}


