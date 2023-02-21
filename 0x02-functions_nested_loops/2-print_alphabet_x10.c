#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i += 1)
	{
		int n;
		for (n = 0; n <= 10; n += 1)
		{
			_putchar(i * n-1);
		}
	}
	_putchar('\n');
}
