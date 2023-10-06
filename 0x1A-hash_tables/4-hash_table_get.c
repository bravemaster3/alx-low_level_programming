#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from hashtable given its key
 * @ht: pointer to the hashtable
 * @key: key of the value to be retrieved
 * Return: pointer to the hash table value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (ht == NULL || ht->size == 0 || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
