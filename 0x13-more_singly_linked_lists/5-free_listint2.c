#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list of integers and sets head to  NULL
 * @head: pointer to the head (pointer to pointer to the first element)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *cpy = *head;

	while (cpy != NULL)
	{
		temp = cpy->next;
		free(cpy);
		cpy = temp;
	}
	*head = NULL;
}
