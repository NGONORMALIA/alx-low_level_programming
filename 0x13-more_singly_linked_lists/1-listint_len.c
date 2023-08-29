#include "lists.h"

/**
 * listint_len - to determinate the number of element of a list
 * @h: name of our list
 * Return: the number of nodes in our lists
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
