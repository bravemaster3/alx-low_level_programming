#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list of integers
 * @head: pointer to the first element of the list
 * Return: the number of elements of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t len = 0;

	if (head == NULL)
		return (0);
	slow = head,
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)(slow->next), slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)(slow->next), slow->n);
			exit(98);
		}
		len++;
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)(slow->next), slow->n);
		slow = slow->next;
		len++;
	}
	return (len);
}
