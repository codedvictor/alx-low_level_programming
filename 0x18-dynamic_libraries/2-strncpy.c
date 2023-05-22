#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (src[y])
	{
		y++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
