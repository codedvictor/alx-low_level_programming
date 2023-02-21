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
	char low;
	char i;
	low = tolower(i);
	putchar(low);
	putchar('\n');
}
