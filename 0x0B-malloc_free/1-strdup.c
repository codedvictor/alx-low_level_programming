#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: new string pointer
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int x, y;
	char *z;

	if (str == NULL)
		return (NULL);

	for (y = 0; y <= *str; y++)
	{
	}

	y += 1;
	z = malloc(sizeof(char) * y);

	for (x = 0; x < y; x++)
		z[x] = str[x];

	if (z == NULL)
		return (NULL);
	return (z);
}
