#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int nVar = 0, y = 0;

	while (dest[nVar])
	{
		nVar++;
	}

	while (y < n && src[y])
	{
		dest[nVar] = src[y];
		nVar++;
		y++;
	}

	dest[nVar + y + 1] = '\0';

	return (dest);
}
