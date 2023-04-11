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
	int ofile;
	int len, nfile;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	ofile = open(filename, O_RDONLY);
	if (ofile == -1)
	{
		free(buff);
		return (0);
	}
	len = read(ofile, buff, letters);
	if (len == -1)
	{
		free(buff);
		close(ofile);
		return (0);
	}

	nfile = write(STDOUT_FILENO, buff, len);

	free(buff);
	close(ofile);
	if (nfile != len)
		return (0);
	return (len);
}
