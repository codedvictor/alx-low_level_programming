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
		ij = i % 3;
		ip = i % 5;

		if ((ij == 0) || (ip == 0))
		{
			ij = ij + i;
			ip = ip + i;
		}
		sum = ij + ip;
	}
	printf("%d\n", sum);
	return (0);
}
