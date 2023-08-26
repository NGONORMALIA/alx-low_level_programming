#include "lists.h"

/**
 * free_list - the entry point to deallocate the memory
 * @head: list name
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *freed;

	while ((freed = head) != NULL)
	{
		head = head->next;
		free(freed->str);
		free(freed);
	}
}
