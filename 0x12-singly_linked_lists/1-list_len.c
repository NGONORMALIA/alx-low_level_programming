#include "lists.h"

/**
 * list_len - to determinate the number of element in a singly list
 * @h: the name of our list
 * Return: the number of element of our list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
