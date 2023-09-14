#include "lists.h"
/**
 * add_dnodeint - adds a node at beginning of a dlistint
 * @head: pointer to the head pointer
 * @n: the integer to be added
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL)
	{
		head = malloc(sizeof(dlistint_t));
		if (head == NULL)
			return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = (*head)->next;
	new->prev = *head;
	(*head)->next = new;
	return (new);
}
