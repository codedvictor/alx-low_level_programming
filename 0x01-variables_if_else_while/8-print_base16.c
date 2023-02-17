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
	char h;

	for (i = '0'; i <= '9'; i += 1)
	{
		putchar(i);
	};
	for (h = 'a'; h <= 'f'; h += 1)
	{
		putchar(h);
	}
		putchar('\n');
	return (0);
}
