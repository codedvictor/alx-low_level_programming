#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_to_98 - Entry point
 *
 * @n: is the lowest integer
 *
 * Return: 1 (Success) otherwise 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i += 1)
	{
		if (i < 10)
		{
			_putchar (i + '0');
			_putchar (',');
			_putchar (' ');
		}
		else if (i >= 10) 
		{
			_putchar ((z / 10) + '0');
			_putchar ((z % 10) + '0');
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
