#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit -Entry point
 *
 * @n: is the last number to compute
 *
 * Return: 1 (Success) otherwise 0
 */

void jack_bauer(void)
{
	int i;
	for (i = 0; i <= 23; i += 1)
	{
		int j;
		for (j = 0, j < 60; j += 1)
		{
			_putchar (i / '10');
			_putchar (i % '10');
			_putchar (':');
			_putchar (j / '10');
			_putchar (j % '10);
		}
		_putchar ('\n');
	}
}
