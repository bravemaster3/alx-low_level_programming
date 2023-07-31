#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a singly linked list of integers
 * @h: head, pointer to the first element of the list
 * Return: the number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t len = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len += 1;
	}
	return (len);
}
