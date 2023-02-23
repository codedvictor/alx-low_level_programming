#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return:0
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c += 1)
	{
		int i;

		for (i = 0; i <= 14; i += 1)
		{
			
			if (i > 9)
			{
				_putchar (1 + (i % 10));
			}
			_putchar (i + '0');
		}
		_putchar('\n');
	}
}
