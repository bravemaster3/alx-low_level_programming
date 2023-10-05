#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: hash table array size
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (new_ht == NULL)
	{
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	return (new_ht);
}
