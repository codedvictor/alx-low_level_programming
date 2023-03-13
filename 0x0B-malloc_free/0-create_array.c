#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array collections
 * @size : the address of memory to print
 * @c : the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int t;

	y = malloc(sizeof(char) * size);

	if (size == 0 || y == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		y[t] = c;

	return (y);
}
