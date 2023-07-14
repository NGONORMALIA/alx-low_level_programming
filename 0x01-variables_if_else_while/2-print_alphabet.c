#include <stdio.h>
#include <stdlib.h>
/* its purpose is to print alphabet in lower case*/

/**
 * main - Entry point to print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{ putchar(alpha); }
	putchar('\n');
	return (0);
}
