#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly linked list
 * @h: header of the list, i.e. pointer to the first element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (nil)\n", temp->len);
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		len++;
	}
	return (len);
}
