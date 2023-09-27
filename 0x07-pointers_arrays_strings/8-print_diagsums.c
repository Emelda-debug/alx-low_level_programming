#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input matrix of integers
 * @size: size of the matrix
 * Return: sum of the two diagonals of a square matrix of integers
 */

void print_diagsums(int *a, int size)
{
	/* diagonal 1 = d1 and diagonal 2 = d2 */

	int d1 = 0;
	int d2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		d1 += a[x * size + x];
	}

	for (x = 0; x < size; x++)
	{
		d2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", d1, d2);
}
