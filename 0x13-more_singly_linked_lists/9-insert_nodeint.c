#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head
 *@idx: given position
 *@n: int
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int count = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (idx > 0)
		{
			tmp = *head;
			while (tmp)
			{
				if (idx == count)
				{
					new->next = tmp->next;
					tmp->next = new;
					return (new);
				}
				count++;
				tmp = tmp->next;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
