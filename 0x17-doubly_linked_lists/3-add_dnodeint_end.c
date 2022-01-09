#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: head
 *@n: number
 *Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		new->next = NULL;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
