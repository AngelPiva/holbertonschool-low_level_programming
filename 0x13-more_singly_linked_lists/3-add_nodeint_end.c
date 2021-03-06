#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: head
 *@n: int
 *Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *before;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		before = *head;
		while (before->next)
		{
			before = before->next;
		}
		before->next = new;
	}
	return (new);
}
