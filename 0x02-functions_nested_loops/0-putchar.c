#include "main.h"

/**
 * main - to prin _putchar as a maessage
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tab[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(tab[i]);
	}
	_putchar('\n');
	return (0);
}
