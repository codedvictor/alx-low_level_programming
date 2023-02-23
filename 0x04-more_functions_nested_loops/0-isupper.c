#include "main.h"
#include <stdio.h>

/**
 * _isupper - main entry
 * @c: is the number to check
 * Return: 1 success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
