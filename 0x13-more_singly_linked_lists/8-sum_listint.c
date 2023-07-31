#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums a list of integers
 * @head: pointer to the first element
 * Return: the sum of the data of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
