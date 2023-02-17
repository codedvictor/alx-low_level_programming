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
	char alp;
	char e1 = 'e';
	char q1 = 'q';

	for (alp = 'a'; alp <= 'z'; alp += 1)
	{
		if(alp != e1 && alp != q1)
		putchar(alp);
	};
		putchar('\n');
	return (0);
}

