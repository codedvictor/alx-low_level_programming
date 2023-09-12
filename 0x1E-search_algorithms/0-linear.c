#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 *
 * @array:
 * @size:
 * @value:
 *
 * return: integer value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (value == array[x])
		{
			return (x);
		}
	}
	return (-1);
}
