#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list listed;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(listed, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(listed, const unsigned int);
	}

	va_end(listed);

	return (sum);
}
