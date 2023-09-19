#include "main.h"
/**
 * swap_int- function to swap the value of 2 integers
 *
 * @a:  int to be swapped with a
 *@b: int to be swappwed with b
 *return: return values of int a and b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
}

