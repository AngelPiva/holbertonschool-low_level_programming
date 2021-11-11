#include <stdlib.h>
#include "lists.h"

/**
 *add_node -  adds a new node at the beginning of a list_t list.
 *@head: head
 *@str: string
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;

		*head = new;
	}
	return (new);
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
