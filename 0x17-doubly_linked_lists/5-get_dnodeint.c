#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: head
 *@index: index of the node, starting from 0
 *Return: nth node of a dlistint_t linked list, NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
