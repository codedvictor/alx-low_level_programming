#include "main.h"
#include <stdio.h>

/**
 * swap_int - exchange the code
 * @a,@b: change the value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
