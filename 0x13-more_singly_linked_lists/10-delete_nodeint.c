#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: pointer to pointer to the first element
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	cpy = *head;
	if (listint_len(*head) == 0)
		return (-1);
	if (index == 0)
	{
		*head = cpy->next;
		free(cpy);
		return (1);
	}
	while (cpy != NULL && i < index)
	{
		temp = cpy;
		cpy = cpy->next;
		i++;
	}
	if (i == index && index)
	{
		temp->next = cpy->next;
		free(cpy);
		return (1);
	}
	return (-1);
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
