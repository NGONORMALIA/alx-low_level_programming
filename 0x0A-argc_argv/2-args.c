#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of command line
 * @argv: the command line
 * Return: not
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
