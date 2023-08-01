#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_cycle_detector - catches any loops in an int list
 * @head: pointer to the first element of the list
 * Return: 0 if no loop was found, 1 if a loop was found
 */
int list_cycle_detector(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		/* printf("[%p] %d\n", (void *)(slow), slow->n); */
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * print_listint_safe - prints a singly linked list of integers
 * @head: pointer to the first element of the list
 * Return: the number of elements of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *copy = head;
	size_t len = 0;
	int hasCycle = list_cycle_detector(head);

	while (copy != NULL)
	{
		printf("[%p] %d\n", (void *)copy, copy->n);
		len++;

		if (hasCycle && copy->next >= copy)
		{
			printf("-> [%p] %d\n", (void *)copy->next, copy->next->n);
			exit(98);
		}

		copy = copy->next;
	}

	return (len);
}
