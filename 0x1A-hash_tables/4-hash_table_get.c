#include "hash_tables.h"

/**
 *hash_table_get - retrieves the value assciated to key
 *@ht: hash table to look into
 *@key: key
 *Return: value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!key || !ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (!tmp)
		return (NULL);
	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	return (tmp->value);
}
