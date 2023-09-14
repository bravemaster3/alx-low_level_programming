#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a dlinsint
 * @h: head of the list
 * Return: the length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	if (h == NULL || h->next == NULL)
		return (0);
	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
