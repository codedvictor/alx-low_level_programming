#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_length - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_length(char *str)
{
	int ind = 0, leng = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		leng++;
		ind++;
	}

	return (leng);
}

/**
 * words_count - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int words_count(char *str)
{
	int ind = 0, word = 0, leng = 0;

	for (ind = 0; *(str + ind); ind++)
		leng++;

	for (ind = 0; ind < leng; ind++)
	{
		if (*(str + ind) != ' ')
		{
			word++;
			ind += word_length(str + ind);
		}
	}

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: NULL.
 *         Or - a pointer.
 */
char **strtow(char *str)
{
	char **string;
	int ind = 0;
	int word, x, letter, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = words_count(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (x = 0; x < word; x++)
	{
		while (str[ind] == ' ')
			ind++;

		letter = word_length(str + ind);

		string[x] = malloc(sizeof(char) * (letter + 1));

		if (string[x] == NULL)
		{
			for (; x >= 0; x--)
				free(string[x]);

			free(string);
			return (NULL);
		}

		for (y = 0; y < letter; y++)
			string[x][y] = str[ind++];

		string[x][y] = '\0';
	}
	string[x] = NULL;

	return (string);
}
