#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int x, y, z, j, lim;

	for (x = 0; s1[x]; x++)
	{
		for (y = 0; s2[y]; y++)
		{
			if (x <= y)
			{
				lim = x;
			}
			else
			{
				lim = y;
			}
		}
	}
	while (z <= lim)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			j = s1[z] - s2[z];
			break;
		}

		z++;
	}
	
	return (j);
}
