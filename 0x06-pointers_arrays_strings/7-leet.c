#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int x = 0, y = 0, z = 5;
	char i[5] = {'A', 'E', 'O', 'T', 'L'};
	char j[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if (s[x] == i[y] || s[x] - 32 == i[y])
			{
				s[x] = j[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}
