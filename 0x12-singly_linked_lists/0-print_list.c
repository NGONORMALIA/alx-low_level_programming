#include "lists.h"

/**
 * print_list - the entry poit to print all element of a singly linked list
 * @h: name of our allocation
 * Return: the number of node in our linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
	}
	return (n);
}
