#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_times_table - Entry point
 *
 * @n: is the integer
 *
 * Return: 1 (Success) otherwise 0
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 14)
	{
		int i, j;

		for (i = 0; i <= n; i += 1)
		{
			for (j = 0; j <= n; j += 1)
			{
				int z = i * j;

				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}

