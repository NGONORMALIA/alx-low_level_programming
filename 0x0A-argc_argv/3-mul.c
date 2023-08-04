#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the number of command line
 * @argv: the content of command line
 * Return: 1 if there is no two argument in command line
 */
int main(int argc, char *argv[])
{
	int i, k = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			k *= atoi(argv[i]);
		}
		printf("%d\n", k);
		return (0);
	}
}

