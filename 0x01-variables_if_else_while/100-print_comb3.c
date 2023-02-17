#include <stdlib.h>
#include <time.h>
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
	int i, j;

	for (j = '0'; j <= '9'; j += 1)
	{
		for (i = '0'; i <= '9'; i += 1)
		{
			if (!((i == j) ||(j > i)))
			{
				putchar(j);
				putchar(i);
				if (!(i == '9' && j == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
