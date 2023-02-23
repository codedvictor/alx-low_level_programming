#include "main.h"
#include <stdio.h>

/**
 * _isdigit - main entry
 * @c: is the number to check
 * Return: 1 success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
		return (0);
}
