#include "lists.h"

/**
 * add_nodeint - to add a node at the top of a list
 * @head: name of our list
 * @n: the data of node to add
 * Return: the pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer;

	newer = malloc(sizeof(listint_t));
	if (newer == NULL)
		return (NULL);
	newer->n = n;
	newer->next = *head;
	*head = newer;
	return (*head);
}
