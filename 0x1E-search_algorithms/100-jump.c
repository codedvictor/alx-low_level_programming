#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in sorted array
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * Return: integer value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x, jump, level;

	if (array == NULL || size == 0)
		return (-1);

	level = sqrt(size);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += level;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
