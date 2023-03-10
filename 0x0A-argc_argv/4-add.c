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

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
return (0);
}
