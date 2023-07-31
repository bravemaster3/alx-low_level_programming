#include "lists.h"
#include <stdlib.h>
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
