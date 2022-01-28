#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size: size of the array
 *Return: pointer to the hash table created or NULL if something went wrong
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	hash_node_t **array = NULL;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (NULL);
	new_hash_table->array = array;
	new_hash_table->size = size;
	return (new_hash_table);
}
