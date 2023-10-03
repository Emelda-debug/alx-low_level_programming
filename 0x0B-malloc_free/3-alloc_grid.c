#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: row
 * @height: column
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int** array = malloc(width * sizeof(int**));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < width; x++)
	{
		array[x] = malloc(height * sizeof(int));

		if (array[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(array[x]);
			}
			free(array);

			return (NULL);
		}
	}
	return (array);
}

