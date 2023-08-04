#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of command line
 * @argv: the content of command line
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
