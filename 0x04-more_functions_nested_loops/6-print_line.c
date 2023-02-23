#include "main.h"
/**
 * print_line - prints more numbers
 * @n: no of lines to draw
 * Return:0
 */

void print_line(int n)
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
			_putchar ('_');
			}
		_putchar ('\n');
	}
}
