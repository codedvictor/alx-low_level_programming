#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower -Entry point
 * @int c: case character to check
 * Return: 1 (Success) otherwise 0
 *
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
