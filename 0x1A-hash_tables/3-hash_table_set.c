#include "hash_tables.h"

/**
 * hash_table_set - adds a key-value pair to a hashtable
 * @ht: pointer to the hash table
 * @key: key string
 * @value: value of the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *curr;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL || strcmp(key, "") == 0)
		return (0);

	new_item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_item->key = strdup(key);
	new_item->next = NULL;
	new_item->value = NULL;
	if (value != NULL)
		new_item->value = strdup(value);
	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			if (strcmp(new_item->key, curr->key) == 0)
			{
				free(curr->key);
				free(curr->value);
				curr->key = strdup(key);
				curr->value = strdup(value);
				free(new_item->key);
				free(new_item->value);
				free(new_item);
				return (1);
			}
			curr = curr->next;
		}
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}
	return (1);
}
