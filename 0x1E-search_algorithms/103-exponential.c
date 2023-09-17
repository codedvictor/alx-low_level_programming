#include "search_algos.h"

/**
  * bi_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @lt: The starting index of the [sub]array to search.
  * @rt: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Description: Prints the [sub]array being searched after each change.
  */
int bi_search(int *array, size_t lt, size_t rt, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (rt >= lt)
	{
		printf("Searching in array: ");
		for (x = lt; x < rt; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = lt + (rt - lt) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			rt = x - 1;
		else
			lt = x + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, rt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	rt = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, rt);
	return (bi_search(array, x / 2, rt, value));
}
