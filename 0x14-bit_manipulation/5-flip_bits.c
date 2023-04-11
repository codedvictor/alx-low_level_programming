#include <stdio.h>
#include "main.h"

/**
 * flip_bits - 2 bits flipped
 *
 * @n: number1 to flip
 * @m: number2 to flipped to
 *
 * Return: flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int buff;

	flip = n ^ m;

	while(flip != 0)
	{
		if (flip & 1ul)
			buff++;
		flip = flip >> 2;
	}

	return (buff);
}
