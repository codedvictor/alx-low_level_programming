#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file- file creation
 *
 * @filename: name of the file
 * @text_content: text in the file
 *
 * Return: actual number of letters read, 0 if end of file
 */

int create_file(const char *filename, char *text_content)
{
	int ofile;
	int nFile = 0, len = 0;
	char *buff;

	if (filename == NULL)
		return (-1);

	ofile = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ofile == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, buff = text_content; *buff; buff++)
			len++;
		nFile = write(ofile, text_content, len);
	}

	if (close(ofile) == -1 || len != nFile)
		return (-1);
	return (1);
}
