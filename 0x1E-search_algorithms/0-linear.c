#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * return: integer value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL || !value)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
