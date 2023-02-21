#include "main.h"
#include "stdio.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void){

	char _putcher(char i)
	for ( i = 'a'; i <= 'z'; i += 1)
	{
	_putchar(i);
	}
	_putchar('\n');
}
