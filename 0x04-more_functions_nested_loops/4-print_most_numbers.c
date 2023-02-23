#include "main.h"
/**
 * print_most_numbers - prints the numbers
 * Return:0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c += 1)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
			_putchar (c + '0');
	}
		_putchar('\n');
}
