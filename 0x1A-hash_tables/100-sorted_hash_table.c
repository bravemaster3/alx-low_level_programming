#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table of size @size
 * @size: hash table array size
 * Return: a pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht = malloc(sizeof(shash_table_t));
	unsigned long int i = 0;

	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	new_ht->shead = NULL;
	new_ht->stail = NULL;
	return (new_ht);
}

void _fun(shash_table_t *h, shash_node_t *n, shash_node_t *c, const char *k);
/**
 * shash_table_set - adds a key-value pair to a hashtable
 * @ht: pointer to the hash table
 * @key: key string
 * @value: value of the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *curr = ht->array[index], *new_item;

	if (ht == NULL || ht->size == 0 || key == NULL || strcmp(key, "") == 0)
		return (0);
	while (curr != NULL)
	{
		if (strcmp(key, curr->key) == 0)
		{
			free(curr->value);
			curr->value = (value != NULL) ? strdup(value) : NULL;
			if (curr->value == NULL && value != NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	new_item = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = (value != NULL) ? strdup(value) : NULL;
	if (new_item->value == NULL && value != NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}
	_fun(ht, new_item, curr, key);
	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}

/**
 * _fun- just a sub function taken out to make shash_table_set fun shorter
 * @h: pointer to the hash table
 * @n: new item  node
 * @c: curr pointer for traveral
 * @k: key string
 * Return: No return
 */
void _fun(shash_table_t *h, shash_node_t *n, shash_node_t *c, const char *k)
{
	if (h->shead == NULL || strcmp(k, h->shead->key) < 0)
	{
		n->sprev = NULL;
		n->snext = h->shead;
		if (h->shead)
			h->shead->sprev = n;
		h->shead = n;
		if (h->stail == NULL)
			h->stail = n;
	}
	else
	{
		c = h->shead;
		while (c->snext != NULL && strcmp(k, c->snext->key) >= 0)
			c = c->snext;
		n->sprev = c;
		n->snext = c->snext;
		if (c->snext)
			c->snext->sprev = n;
		c->snext = n;
		if (h->stail == c)
			h->stail = n;
	}
}

/**
 * shash_table_get - retrieves a value from hashtable given its key
 * @ht: pointer to the hashtable
 * @key: key of the value to be retrieved
 * Return: pointer to the hash table value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

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

/**
 * shash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: No return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;
	int printed_first = 0;

	if (ht == NULL || ht->size == 0)
		return;

	printf("{");
	curr = ht->shead;
	while (curr)
	{
		if (printed_first == 1)
			printf(", ");
		printf("'%s': '%s'", curr->key, curr->value);
		printed_first = 1;
		curr = curr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: pointer to the hash table
 * Return: No return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;
	int printed_first = 0;

	if (ht == NULL || ht->size == 0)
		return;

	printf("{");
	curr = ht->stail;
	while (curr)
	{
		if (printed_first == 1)
			printf(", ");
		printf("'%s': '%s'", curr->key, curr->value);
		printed_first = 1;
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: pointer to the hash_table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *curr, *temp;

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
