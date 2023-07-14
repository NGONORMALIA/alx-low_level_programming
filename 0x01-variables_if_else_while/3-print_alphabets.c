#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to print alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{ putchar(alpha); }
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{ putchar(alpha); }
	putchar('\n');
	return (0);
}
