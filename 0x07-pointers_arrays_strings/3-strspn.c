#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, data, confirm;

	data = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		confirm = 0;

		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				data++;
				confirm = 1;
			}
		}

		if (confirm == 0)
			return (data);
	}

	return (data);
}
