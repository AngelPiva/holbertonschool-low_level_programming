#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - function that prints all the elements of a list_t list.
 *@h: list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			nodes++;
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		nodes++;
		}
		h = h->next;
	}

	return (nodes);
}
