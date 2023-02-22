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
	int i, ij, ip, sum;

	for (i = 0; i < 1024; i += 1)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			ij = i % 3;
			ip = i % 5;
		}
		ij = ij + i;
		ip = ip + i;
	}
	sum = ip + ij;
	printf("%d\n", sum);
	return (0);
}
