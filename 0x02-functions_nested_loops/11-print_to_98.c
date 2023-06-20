#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints integers from a given integer to 98
* @n: a given integer
*
* Return: Return nothing
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n--;
		}
	}
	else
	{
		printf("98\n");
	}
}
