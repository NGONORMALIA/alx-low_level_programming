#include "lists.h"

/*
* add_dnodeint_end - to add the node at the end of our list
* @head: our double list
* @n: data to add
* Return: the addres of the new elemnt
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *tmp;

    new = malloc(sizeof(dlistint_t ));
    if (new == NULL)
        return NULL;
    if (*head == NULL)
	{
	    new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
    new->prev = NULL;
    new->n = n;
    new->next = NULL;
    tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
    new->prev = tmp;
    return *head;
}
