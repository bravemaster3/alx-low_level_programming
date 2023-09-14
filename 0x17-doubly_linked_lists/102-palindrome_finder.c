#include "lists.h"

int is_palindrome(dlistint_t *head)
{
	dlistint_t *ptr1 = head, *ptr2 = head;

	while (ptr2->next)
	{
		ptr2 = ptr2->next;
	}
	while (ptr1 && ptr2)
	{
		if (ptr1->n != ptr2->n)
			return (0);
		ptr1 = ptr1->next;
		ptr2 = ptr2->prev;
	}
	return (1);
}

dlistint_t *int_to_dlist(int product)
{
	int n;
	dlistint_t *head = NULL;

	while (product != 0)
	{
		n = product % 10;
		add_dnodeint(&head, n);
		product /= 10;
	}
	if (head == NULL)
		add_dnodeint(&head, n);
	return (head);
}
