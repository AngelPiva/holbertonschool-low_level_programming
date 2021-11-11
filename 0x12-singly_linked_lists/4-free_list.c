#include "lists.h"
#include <stdlib.h>

/**
 *free_list - function that frees a list_t list
 *@head: head
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head;
		free(x->str);
		free(x);
		head = head->next;
	}
	free(head);
}
