#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: the pointer to the first element of the list
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *temp, *current = head;

	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	free(current->str);
	free(current);
}
