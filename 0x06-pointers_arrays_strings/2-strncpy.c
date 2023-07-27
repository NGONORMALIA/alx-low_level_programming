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
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < n; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
