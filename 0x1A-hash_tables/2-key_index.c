#include "hash_tables.h"

/**
 *key_index - gives you the index of a key
 *@key: key
 *@size: size of the array of the hash
 *Return: index at which the key/value is stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k = 0;

	k = hash_djb2(key) % size;
	return (k);
}
