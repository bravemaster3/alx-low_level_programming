#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a node at beginning of a list_t list
 * @head: pointer to head or NULL on failure
 * @str: to
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;
	return (*head);
}
