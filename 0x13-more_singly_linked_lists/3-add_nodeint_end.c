#include "lists.h"

/**
 * add_nodeint_end - to add node at the end of a list
 * @head: the nameof our list
 * @n: the data of our node to add
 * Return: the pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newer;
	listint_t *tmp;

	newer = malloc(sizeof(listint_t));
	if (newer == NULL)
		return (NULL);
	newer->n = n;
	newer->next = *head;
	tmp = *head;
	if (*head == NULL)
		*head = newer;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newer;
	}
	return (*head);
}
