#include "lists.h"

/**
 * print_listint - the entry point to print element of a list
 * @h: name of our list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
