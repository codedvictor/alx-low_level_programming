#include "search_algos.h"

/**
  * advanced_bi_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @lt: The starting index of the [sub]array to search.
  * @rt: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  */
int advanced_bi_recursive(int *array, size_t lt, size_t rt, int value)
{
	size_t x;

	if (rt < lt)
		return (-1);

	printf("Searching in array: ");
	for (x = lt; x < rt; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = lt + (rt - lt) / 2;
	if (array[x] == value && (x == lt || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_bi_recursive(array, lt, x, value));
	return (advanced_bi_recursive(array, x + 1, rt, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_bi_recursive(array, 0, size - 1, value));
}
