#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);

	else if (sq == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
