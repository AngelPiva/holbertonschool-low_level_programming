#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n = 0, i = 123;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	printf("{");
	while (n < ht->size)
	{
		tmp = ht->array[n];
		while (tmp != NULL)
		{
			if (i == 40)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			i = 40;
		}
		n++;
	}
	printf("}\n");
}
