#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the head pointer
 * @idx: index where the node should be inserted
 * @n: integer to be inserted
 * Return: pointer to the inserted node or NULL if insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *ptr;
	unsigned int i = 0;

	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	ptr = *h;
	while (ptr)
	{
		if (i == idx)
		{
			ptr = ptr->prev; /*move one pointer back*/
			new->next = ptr->next;
			if (new->next != NULL)
				new->next->prev = new;
			new->prev = ptr;
			ptr->next = new;
			return (new);
		}
		i++;
		ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
