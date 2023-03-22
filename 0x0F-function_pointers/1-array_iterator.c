#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - give parameters
  * @array: element of array
  * @size: size of array
  * @action: function pointer
  *
  * Return: 0 Success
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
