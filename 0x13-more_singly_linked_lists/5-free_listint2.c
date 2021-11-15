#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - function that frees a list, function sets the head to NULL
 *@head: head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head)
	{
	while (*head)
	{
		x = *head;
		*head = (*head)->next;
		free(x);
	}
	free(*head);
	*head = NULL;
	}
}
