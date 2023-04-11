#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int oFile, nLen, nFile;
	char *ncount;

	if (filename == NULL || letters == 0)
		return (0);
	ncount = malloc(sizeof(char) * (letters));
	if (ncount == NULL)
		return (0);

	oFile = open(filename, O_RDONLY);
	if (oFile == -1)
	{
		free(ncount);
		return (0);
	}
	nLen = read(oFile, ncount, letters);
	if (nLen == -1)
	{
		free(ncount);
		close(oFile);
		return (0);
	}

	nFile = write(1, ncount, nLen);
	if (nFile == -1)
		{
			free(ncount);
			close(oFile);
			return (0);
		}
	free(ncount);
	close(oFile);
	return (nLen);
}
