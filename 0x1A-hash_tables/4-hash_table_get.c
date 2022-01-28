#include "hash_tables.h"

/**
 *
 *
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (!tmp)
		return (NULL);
	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	return (tmp->value);

}
