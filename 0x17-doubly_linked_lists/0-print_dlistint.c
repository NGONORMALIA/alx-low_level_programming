#include "list.h"

/*
* print_dlistint - the entry point to print all element in a double list
* @h: our double list
* Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t num;
    dlistint_t new = h;

    num = 0;
    while ( new != NULL)
    {
        printf("%d", h->n);
        num++;
        new = new->next;
    }
    return num;
}
