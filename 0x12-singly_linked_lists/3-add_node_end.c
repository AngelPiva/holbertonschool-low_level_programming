#include <stdlib.h>
#include "lists.h"

/**
 *add_node_end -  adds a new node at the end of a list_t list
 *@head: head
 *@str: string
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *before;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			before = *head;
			while (before->next)
			{
				before = before->next;
			}
			before->next = new;
			return (new);
		}
	}
	return (NULL);
}

/**
*_strlen - returns the length of a string
*@s: pointer
*Return: 0
*/

int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
	return (0);
}
