#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}