#include "lists.h"

/*
* dlistint_len - entry point to return the len of our list
* @h: our double linked list
*Return: the number of node in our list
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t num = 0;
    dlistint_t new = h;

    while(new != NULL)
    {
        num++;
        new = new->next;
    }
    return num;
