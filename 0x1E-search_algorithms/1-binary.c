#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * Return: integer value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, l, r;

	if (array == NULL || size == 0)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (x = l; x < r; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = l + (r - l) / 2;
		if (array[x] == value)
		{
			return (x);
		}
		if (array[x] > value)
		{
			r = x - 1;
		}
		else
			l = x + 1;
	}
	return (-1);
}
