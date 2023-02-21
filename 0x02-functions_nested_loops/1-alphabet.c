#include "main.h"
/**
 * main - check the code
 * print_alphabet - into lower case
 * Return: Always 0.
 */

void print_alphabet(void)
	/*printing lowercase */
{
	int i;

	for (i = 'a'; i <= 'z'; i += 1)
	{
		_putchar(i);
	}
	_putchar('\n');
}
