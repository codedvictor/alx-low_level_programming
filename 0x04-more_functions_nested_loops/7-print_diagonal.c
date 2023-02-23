#include "main.h"
/**
 * print_diagonal - draw lines
 * @n: no of dragonal
 * Return:0
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= n; i += 1)
			{
			_putchar ('\');
			}
		_putchar ('\n');
	}
}
