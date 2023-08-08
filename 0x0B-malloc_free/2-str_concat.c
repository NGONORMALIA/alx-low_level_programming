#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - to concatenate two string
 * @s1: the first string
 * @s2: the second string
 * Return: return a string which conterns the concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *ctc;
	int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ctc = malloc(sizeof(char) * (i + j + 1));
	if (ctc == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ctc[k] = s1[k];
	for (k = 0; k < j; k++)
		ctc[i + k] = s2[k];
	ctc[i + j] = '\0';
	return (ctc);
}
