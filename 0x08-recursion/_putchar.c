#include <unistd.h>
#include "main.h"

/**
 * _putchar - to print some character
 * @c: character to print
 * Return: 1 if there is no error or -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
