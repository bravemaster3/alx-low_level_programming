#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to the head pointer
 * @index: index where to remove the node
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head);
		if ((*head)->next)
		{
			(*head)->next->prev = NULL;
			(*head) = (*head)->next;
			free(ptr);
		}
		else
		{
			*head = NULL;
			free(ptr);
		}
		return (1);
	}
	ptr = *head;
	while (ptr)
	{
		if (i == index)
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
