#include "search_algos.h"
/**
 * binary_search -function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * or -1 if array is Null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, x;

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
