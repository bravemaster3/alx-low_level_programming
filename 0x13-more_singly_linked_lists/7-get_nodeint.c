#include "lists.h"

/**
 * get_nodeint_at_index - retrieves node given an index
 * @head: pointer to the first node
 * @index: index of the node to be retrieved
 * Return: the pointer to the linstint_t struct of the retrieved element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		if (temp != NULL)
			temp = temp->next;
		i++;
	}
	return (temp);
}
