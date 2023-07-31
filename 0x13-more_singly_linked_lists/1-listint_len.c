#include "lists.h"

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
