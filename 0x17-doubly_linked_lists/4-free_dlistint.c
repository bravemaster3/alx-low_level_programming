#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: head pointer
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *tmp;

	if (head != NULL)
	{
		ptr = head;
		while (ptr)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp);
		}
	}
}
