#include "lists.h"

/*
* add_dnodeint - entry point to add node at the begining of the list
* @head: our double list
* @n: the node's data to add
* Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

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
    new->n = n;
    new->next = *head;
    head->prev = new;
    *head = new;
    return (*head);
}
