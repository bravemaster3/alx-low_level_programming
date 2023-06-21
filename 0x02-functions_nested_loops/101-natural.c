#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 on success
*/

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
