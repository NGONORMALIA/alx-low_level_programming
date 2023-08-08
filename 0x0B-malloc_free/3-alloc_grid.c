#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - to print a two dimensional aray of integer
 * @width: the width of the array
 * @height: the height of the array
 * Return: return a two dimensional array of integer
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
