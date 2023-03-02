#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int nVar = 0;
	int x;

	while (dest[nVar])
	{
		nVar++;
	}

	for (x = 0; src[x] != 0; x++)
	{
		dest[nVar] = src[x];
		nVar++;
	}

	dest[nVar] = '\0';

	return dest;
}
