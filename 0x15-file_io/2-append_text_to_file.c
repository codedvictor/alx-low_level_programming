#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - file creation and insert text
 *
 * @filename: file name
 * @text_content: text to insert
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ofile;
	ssize_t nFile = 0, len = 0;
	char *buff;

	if (filename == NULL)
		return (-1);

	ofile = open(filename, O_WRONLY | O_APPEND);
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
