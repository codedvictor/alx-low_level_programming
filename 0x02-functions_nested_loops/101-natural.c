#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 *
 * Return: 1 (Success) otherwise 0
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
