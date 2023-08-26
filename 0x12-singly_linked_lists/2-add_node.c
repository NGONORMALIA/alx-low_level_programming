#include "lists.h"

/**
 * add_node - to add a node at the beginnig of a list
 * @head:the present list
 * @str: some string
 * Return: the addresss of th enew element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
