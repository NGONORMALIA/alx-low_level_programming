#include "lists.h"

/*
* free_dlistint - the entry point to free a list
* @head: the list to free
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *curend;

    while ((curend == head) != NULL)
    {
        head = head->next;
        free(curend->n);
        free(curend);
    }
}
