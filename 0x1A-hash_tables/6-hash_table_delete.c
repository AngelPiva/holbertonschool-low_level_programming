#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *tmp = NULL, *aux = NULL;

	if (!ht)
		return;

	while (n < ht->size)
	{
		tmp = ht->array[n];
		if (tmp)
		{
			while (tmp)
			{
				aux = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = aux;
			}
		}
		n++;
	}
	free(ht->array);
	free(ht);
}
