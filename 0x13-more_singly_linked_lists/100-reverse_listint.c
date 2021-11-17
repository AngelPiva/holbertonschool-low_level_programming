#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list
 *@head: head
 *Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *left = NULL, *right;

	if (head)
	{
		while (*head)
		{
			right = *head;
			*head = (*head)->next;
			right->next = left;
			left = right;
		}
		*head = left;
		return (*head);
	}
	return (NULL);
}
