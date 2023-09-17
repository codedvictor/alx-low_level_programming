#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in sorted array
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * Return: integer value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, lt, rt;

	if (array == NULL || size == 0)
		return (-1);
	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		x = lt + (((double)(rt - lt) / (array[rt] - array[lt])) * (value - array[lt]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			rt = x - 1;
		else
			lt = x + 1;
	}

	return (-1);
}
