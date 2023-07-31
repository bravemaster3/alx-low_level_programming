#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (idx == 0)
		return (add_nodeint(head, n));
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

/**
 * add_nodeint - adds a node at begining of an int list
 * @head: pointer to the head (double pointer)
 * @n: the integer to add
 * Return: the pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
