#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prints the number of argument
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argv[i] = '\0')
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
return (0);
}
