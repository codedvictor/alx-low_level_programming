#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void transfer_file(const char *source, const char *destination);
/**
 * main - file copying
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: 0 on success
 */

int main(int arg_c, char **arg_v)
{
	if (arg_c != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	transfer_file(arg_v[1], arg_v[2]);
	exit(0);
}

/**
 * transfer_file - transfer file from file to
 *
 * @source: source file
 * @destination: destination file
 *
 * Return: 0 on success
 */

void transfer_file(const char *source, const char *destination)
{
	int file_from, file_to, rev, wrt;
	char buff[1024];

	file_from = open(source, O_RDONLY);
	if (source == NULL || file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	rev = read(file_from, buff, 1024);

	file_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wrt = write(file_to, buff, rev);
	while (rev > 0)
	{
		if (file_to == -1 || wrt != rev)
		{
			dprintf(2, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}

	if (rev == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
			exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
