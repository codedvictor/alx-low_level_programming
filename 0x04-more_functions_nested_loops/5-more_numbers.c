#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return:0
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c += 1)
	{
		int i;

		for (i = 0; i < 14; i += 1)
		{
			_putchar (i + '0');
		}
		_putchar('\n');
	}
}
