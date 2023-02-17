/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char alpha;

	for ( alpha = 'a'; alpha <= 'z'; alpha += 1)
	{
		putchar(alpha);
	};
	return(0);
}
