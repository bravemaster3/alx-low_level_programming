#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_cycle_detector2 - catches any loops in an int list
 * @head: pointer to the first element of the list
 * Return: 0 if no loop was found, 1 if a loop was found
 */
int list_cycle_detector2(const listint_t *head)
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
 * free_listint_safe - prints a singly linked list of integers
 * @h: pointer to the first element of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *copy, *temp;
	size_t len = 0;
	int hasCycle;

	if (h == NULL || *h == NULL)
		return (0);

	copy = *h;
	hasCycle = list_cycle_detector2(*h);
	while (copy != NULL)
	{
		len++;

		if (hasCycle && copy->next >= copy)
			break;
		temp = copy;
		copy = copy->next;
		free(temp);
	}
	free(copy);

	return (len);
}
