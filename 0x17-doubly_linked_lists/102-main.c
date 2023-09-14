#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int pal, i, j, product, max = 0;

    head = NULL;
    add_dnodeint(&head, 8);
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 7);
    add_dnodeint(&head, 7);
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 0);
    print_dlistint(head);

    pal = is_palindrome(head);
    if (pal)
        printf("This list is a palindrome\n");
    else
        printf("This list is NOT a palindrome\n");

    printf("________________________________\n");
    print_dlistint(int_to_dlist(998001));
    pal = is_palindrome(int_to_dlist(998001));
    if (pal)
        printf("This list is a palindrome\n");
    else
        printf("This list is NOT a palindrome\n");

    printf("_________________________________\n");

    for (i = 100; i <= 999; i++)
    {
        for (j = 100; j <= 999; j++)
        {
            product = i * j;
            pal = is_palindrome(int_to_dlist(product));
            if (pal == 1)
            {
                if (product > max)
                    max = product;
                printf(" [%d * %d = %d]\n", i, j, product);
            }
        }
    }

    printf("max: %d\n", max);
    return (EXIT_SUCCESS);
}
