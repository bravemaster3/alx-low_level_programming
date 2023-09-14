#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of a dlinstint
 * @head: pointer to the head pointer
 * @n: the new integer to add
 * Return: the pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *ptr;

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	ptr = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;

	return (new);
}
