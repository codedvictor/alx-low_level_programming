#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *
 * @filename: the file name
 * @letters: the letters in the file
 *
 * Return: 0 success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *texts;
	int count, words;

	texts = malloc(letters * sizeof(char *));

		if (filename == NULL || texts == NULL)
			return (0);
		if (letters == 0)
			return (0);

		words = open(filename, O_RDONLY);
		if (words == -1)
			return (0);

		count = read(words, texts, letters);
		write(1, texts, count);

	free(texts);
	close(words);

	return (count);
}
