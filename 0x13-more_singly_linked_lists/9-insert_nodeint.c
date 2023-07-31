#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: pointer to the pointer to the first element
 * @idx: index where to insert a new element
 * @n: integer to insert at that node
 * Return: Address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpy, *temp, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cpy = *head;
	while (cpy != NULL && i < idx)
	{
		temp = cpy;
		cpy = cpy->next;
		i++;
	}
	if (i == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = cpy;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
