#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - catches any loops in an int list
 * @head: pointer to the first element of the list
 * Return: pointer to the start of the loop, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		/* printf("[%p] %d\n", (void *)(slow), slow->n); */
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);
}
