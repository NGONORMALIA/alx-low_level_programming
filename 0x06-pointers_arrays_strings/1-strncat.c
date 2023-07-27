#include "main.h"

/**
 * _strncat - to concatenate n charcter of the second string
 * @dest: the first string(destination)
 * @src: the second string(source)
 * @n: number of character to concatenate from src to dest
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (k = 0; k < n && src[i] != '\0'; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	return (dest);
}
