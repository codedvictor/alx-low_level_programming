#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory
 * @s: the address to print
 * @b: the size of the memory to print
 * @n: the varible
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);	
}
