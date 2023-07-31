#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list of integers
 * @head: pointer to the first element
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
