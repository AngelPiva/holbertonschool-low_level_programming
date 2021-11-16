#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - function returns the nth node of a linked list.
 *@head: head
 *@index: nth node
 *Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head)
	{
	while (head != NULL)
	{
		if (index == x)
		{
			return (head);
		}
		x++;
		head = head->next;
	}
	}
	return (NULL);
}
