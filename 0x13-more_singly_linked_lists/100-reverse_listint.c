#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a list of integers
 * @head: double pointer to the first element of the list
 * Return: the pointer to the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	curr = *head;
	while (curr)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
