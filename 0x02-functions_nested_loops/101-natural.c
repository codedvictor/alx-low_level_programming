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
	int i, i3, i5, sum;

	for (i = 0; i < 1024; i += 1)
	{
		i3 = i % 3;
		i5 = i % 5;

		if ((i3 == 0) || (i5 == 0))
		{
			sum = i3 + i5;
		}

	}
	printf("%d\n", sum);
	return (0);
}
