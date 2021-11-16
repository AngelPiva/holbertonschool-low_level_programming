#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index of a linked list
 *@head: head
 *@index: index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp, *sig;

	if (head && *head)
	{
		tmp = *head;
		if (index > 0)
		{
			if (tmp->next == NULL)
				return (-1);
			while (tmp)
			{
				if (index - 1 == count)
				{
					sig = tmp->next->next;
					free(tmp->next);
					tmp->next = sig;
					return (1);
				}
				count++;
				tmp = tmp->next;
			}
		}
		else
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		return (1);
	}
		return (-1);
	return (-1);
}
