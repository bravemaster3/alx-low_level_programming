#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: struct list_t
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
