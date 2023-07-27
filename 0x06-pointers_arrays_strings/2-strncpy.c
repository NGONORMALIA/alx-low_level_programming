#include "main.h"

/**
 * _strncpy - to copy exactly n character
 * @dest: the first string to copy
 * @src: the second string
 * @n: the number of character to copy from src to dest
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		*(dest + k) = *(src + k);
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
