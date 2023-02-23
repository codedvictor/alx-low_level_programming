#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draw lines
 * @n: no of dragonal
 * Return:0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= n; i += 1)
			{
			for (j = 1; j <= i; j += 1)
			{
				_putchar (32);
			}
			_putchar (92);
			_putchar ('\n');
			}
	}
}
