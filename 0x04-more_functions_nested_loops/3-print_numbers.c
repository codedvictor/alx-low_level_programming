#include "main.h"
/**
 * print_numbers - prints the numbers
 * @a: printed number
 * Return:0
 */

void print_numbers(void)
{
	int c = 0;

	while(c <= 9)
	{
		_putchar (c);
		c++;
	}
	_putchar('\n');
}
