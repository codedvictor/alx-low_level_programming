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

	for (i = n; i <= 111; i += 1)
	{
		if (n > (-112) && n <= (-100))
		{
			_putchar ('-');
			_putchar ((i / 100) + '0');
                        _putchar ((i / 10) + '0');
                        _putchar ((i % 10) + '0');
		}
		if else(n <= (-10) && n > (-100))
		{
			_putchar ('-');
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
		}
			
		else if (n < 10 && n > (-10))
		{
			_putchar (i + '0');
			_putchar (',');
			_putchar (' ');
		}
		else if (i >= 10 && i < 100) 
		{
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
		}
		else if (i >= 100 && i < 112)
			_putchar ((i / 100) + '0');
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
		_putchar (',');
                _putchar (' ');
	}
	_putchar ('\n');
}
