#include "main.h"
#include <stdio.h>

/**
  * cap_string - entry point
  * @s: separatorrs
  *
  * Return: char value
  */

char *cap_string(char *s)
{
	int x = 0, y;
	int pt = 13;
	char ps[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		y = 0;

		while (y < pt)
		{
			if ((x == 0 || s[x - 1] == ps[y]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

			y++;
		}

		x++;
	}

	return (s);
}

