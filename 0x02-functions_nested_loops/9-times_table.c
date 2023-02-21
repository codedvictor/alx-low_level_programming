#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * times_table - Entry point
 *
 * @i & j: is the hour and minutes of the day
 *
 * Return: 1 (Success) otherwise 0
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i += 1)
	{
		int j;

		for (j = 0; j <= 9; j += 1)
		{
			int z = i * j;

			if (z == 0)
			{
				_putchar (z + '0');
			}
			else if (z <= 9)
			{
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
			_putchar (z + '0');
			}
			else if (z > 9)
			{
			_putchar (',');
			_putchar (' ');
			_putchar ((z / 10) + '0');
			_putchar ((z % 10) + '0');
			}	
		}
		_putchar ('\n');
	}
}
