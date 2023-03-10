#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha -Entry point
 *
 * @c: is the char to be checked for lowercase
 *
 * Return: 1 (Success) otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		return (1);
	}
	else
		return (0);

}
