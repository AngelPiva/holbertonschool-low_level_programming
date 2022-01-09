#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list
 *@head: head
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
