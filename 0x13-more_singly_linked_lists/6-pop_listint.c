#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - cut and return first element
 * @head: pointer to the pointer to the first element
 * Return: the integer of the node that poped out.
 */
int pop_listint(listint_t **head)
{
	int popped;
	listint_t *temp;

	if (head == NULL || listint_len(*head) == 0)
		return (0);
	temp = *head;
	popped = temp->n;
	*head = (*head)->next;
	free(temp);
	return (popped);
}

/**
 * listint_len - counts the number of elements in a list
 * @h: pointer to the first element of the list
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t len = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
