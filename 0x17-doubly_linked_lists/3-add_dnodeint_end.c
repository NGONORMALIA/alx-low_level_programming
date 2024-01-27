#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of dbl
 * @head: the heda of dbl
 * @n: the n
 * Return: the new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *back;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new->n = n;
	new->next = NULL;
	tmp->next = new;
	new->prev = tmp;
	return (*head);
}
