#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: No return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	int printed_first = 0;
	unsigned long int i;

	if (ht == NULL || ht->size == 0)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] == NULL && i < ht->size)
			i++;
		curr = ht->array[i];
		while (curr)
		{
			if (printed_first == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			printed_first = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
