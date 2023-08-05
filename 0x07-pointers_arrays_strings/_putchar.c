#include <unistd.h>
#include "main.h"

/**
 * _putchar - to print some character
 * @c: the character to print
 * Return: 1 if succes and -1 if there is an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
