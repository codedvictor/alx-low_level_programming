#include "main.h"
#include <stdio.h>

/**
 * swap-int - exchange the code
 * @a & @b: change the value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int *c  = *a;
	*a = *b;
	*b = *c;
}
