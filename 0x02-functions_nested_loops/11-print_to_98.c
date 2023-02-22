#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_to_98 - Entry point
 *
 * @n: is the lowest integer 
 * Return: 1 (Success) otherwise 0
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i += 1)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j -= 1)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				printf("%d\n", j);
			}
		}
	}
}
