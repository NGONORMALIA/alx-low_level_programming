#include <unistd.h>
#include "main.h"
/**
 * _putchar - to print character
 * @c: thr character to print
 * Return: ALways 1 for error and 0 for succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
