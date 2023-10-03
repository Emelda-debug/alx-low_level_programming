#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- function that frees a 2 dimensional grid previously
 * created by my alloc_grid function
 * @grid:array to be freed
 * @height: column
 * Return: always 0 success
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
