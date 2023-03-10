#include <stdio.h>

/**
 * main - prints the number of argument
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);

	return (0);
}
