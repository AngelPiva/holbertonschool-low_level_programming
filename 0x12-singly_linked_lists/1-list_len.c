#include "lists.h"
#include <stdlib.h>

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: list
 *Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
