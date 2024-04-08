#include "search_algos.h"
/**
 * interpolation_search- function that searches for
 * a value in a sorted array of
 * integers using the interpolation_search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 * or -1 if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, low, high;

	if (array == NULL)
	{
		return (-1);
	}
	for (low = 0, high = size - 1; high >= low;)
	{
		x = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (x < size)
		{
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}
		if (array[x] == value)
		{
			return (x);
		}
		if (array[x] > value)
		{
			high = x - 1;
		}
		else
		{
			low = x + 1;
		}
	}
	return (-1);
}

