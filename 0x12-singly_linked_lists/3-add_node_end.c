#include "lists.h"

/**
 * add_node_end - to add a node at the end of our list
 * @head: the previous list
 * @str: some string to duolicate
 * Return: the addresss of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *frr, *tmp;
	size_t n = 0;

	frr = malloc(sizeof(list_t));
	if (frr == NULL)
		return (NULL);
	frr->str = strdup(str);
	while (str[n] != NULL)
		n++;
	frr->len = n;
	frr->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = frr;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = frr;
	}
	return (*head);
}
