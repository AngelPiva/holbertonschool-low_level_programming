#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size: size of the array
 *Return: pointer to the hash table created or NULL if something went wrong
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	return (new_hash);
}
