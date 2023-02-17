/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i += 1)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i >= 0 && i != 99)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	};
	return (0);
}
