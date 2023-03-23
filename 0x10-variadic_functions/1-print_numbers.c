#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listed;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(listed, n);

		while (i < n)
		{
			printf("%d", va_arg(listed, int));

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(listed);
	}
	printf("\n");
}
