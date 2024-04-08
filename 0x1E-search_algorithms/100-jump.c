#include "search_algos.h"
/**
 * jump_search- function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 * or -1 if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, jump = sqrt(size), x;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (x = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		x = prev;
		prev += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, prev);
	prev = prev < size - 1 ? prev : size - 1;
	for (; x < prev && array[x] < value; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	return (array[x] == value ? (int)x : -1);
}


