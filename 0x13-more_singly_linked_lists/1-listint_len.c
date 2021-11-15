#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: linked list
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
