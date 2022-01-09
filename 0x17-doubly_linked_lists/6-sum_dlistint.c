#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 *@head: head
 *Return: sum of all the data or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
