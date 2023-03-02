#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *x, j, emp, y;

	x = a;

	for (j = 1; j < n; j++)
	{
		x++;
	}

	for (y = 0; y < j / 2; y++)
	{
		emp = a[y];
		a[y] = *x;
		*x = emp;
		x--;
	}
}
