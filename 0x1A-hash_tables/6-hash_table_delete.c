#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash_table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr)
			{
				temp = curr;
				curr = curr->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
