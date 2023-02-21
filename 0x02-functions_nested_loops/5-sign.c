#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_sign -Entry point
 *
 * @n: is the number sign to be checked
 *
 * Return: 1 (Success) otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (1);
	} else
	{
		_putchar (0);
		return (0);
	}

}
