#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *sig;
	int num = 0;

	if (*head)
	{
		sig = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = sig;
	}
	return (num);
}
