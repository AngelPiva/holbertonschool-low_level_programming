#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table.
 *@ht: hash table to add or update
 *@key: key
 *@value: value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (!ht || !key)
	{
		return (0);
	}
	index = key_index((unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	return (1);
}
