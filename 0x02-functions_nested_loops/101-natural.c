#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit -Entry point
 *
 * @n: is the last number to compute
 *
 * Return: 1 (Success) otherwise 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 1024; i += 3)
	{
		for (j = 0; j < 1024; j += 5)
		{
			k = i * j;
		}
		k += k;

	}
	printf("%d\n", k);
	return (0);
}
