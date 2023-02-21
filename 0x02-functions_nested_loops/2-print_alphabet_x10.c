#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 -Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n += 1)
	{
		int i;

		for (i = 'a'; i <= 'z'; i += 1)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
