#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit -Entry point
 *
 * @n: is the last number to compute
 *
 * Return: 1 (Success) otherwise 0
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = i * (-1);
	}
	_putchar (i + '0');

	return (i);
}
