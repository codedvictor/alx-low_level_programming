#include "main.h"
#include <stdio.h>

/**
 * _isupper - main entry
 * @a: is the character to check
 * Return: 1 success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
