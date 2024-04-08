#include "search_algos.h"
/**
 * _binary_search -function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: starting index point
 * @right: ending index point
 * @value: is the value to search for
 * Return: the first index where value is located
 * or -1 if array is Null
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
		{
			printf("%d, ", array[x]);
		}
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
		{
			return (x);
		}
		if (array[x] < value)
		{
			left = x + 1;
		}
		else
		{
			right = x - 1;
		}
	}
	return (-1);
}
/**
 * exponential_search- function that searches for
 * a value in a sorted array of
 * integers using the exponential_search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 * or -1 if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, r;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		}
		r = x < size ? x : size - 1;
		printf("Value found between indexes [%ld] and [%ld]\n", x / 2, r);
	}
	return (_binary_search(array, x / 2, r, value));
}
