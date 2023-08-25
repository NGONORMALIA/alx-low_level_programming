#include "lists.h"

/**
 * free_list - the entry point to deallocate the memory
 * @head: list name
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
