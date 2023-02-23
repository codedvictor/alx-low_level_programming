#include "main.h"
#include <stdio.h>
/**
 * print_square - draw square
 * @size: no of square
 * Return:0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i += 1)
		{
			for (j = 0; j < size; j += 1)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
}
