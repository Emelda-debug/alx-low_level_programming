#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range- function that creates an array of integers
 * @min: values to be filled in array
 * @max: values to be filled in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *x, sum, y;

	if (min > max)
	{
		return (NULL);
	}
	sum = max - min + 1;
	x = malloc(sizeof(int) * sum);
	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; min <= max; y++)
	{
		x[y] = min++;
	}
	return (x);
}
