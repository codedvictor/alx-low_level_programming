/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i += 1)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	};
		putchar('\n');
	return (0);
}
