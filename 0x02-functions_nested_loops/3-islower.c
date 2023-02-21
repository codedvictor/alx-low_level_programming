#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower -Entry point
 * int c - is the integer
 * Return: 1 (Success)
 * Return: 0 (failed)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
