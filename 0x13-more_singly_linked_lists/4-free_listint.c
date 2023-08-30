i#include "lists.h"

/**
 * free_listint - to free a singly list
 * @head: the name of our list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *newer;

	while ((newer = head) != NULL)
	{
		head = head->next;
		free(newer);
	}
}
