#include "main.h"
#include <stdio.h>

/**
 * _isdigit - main entry
 * @c: is the number to check
 * Return: 1 success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
