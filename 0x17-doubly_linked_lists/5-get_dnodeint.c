#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index
 * @head: pointer to the head
 * @index: index of the node to retrieve
 * Return: pointer to the node to get
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (ptr)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
