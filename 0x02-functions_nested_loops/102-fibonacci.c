#include <stdio.h>

/**
* main - Entry point, print first 50 fibonacci
*
* Return: 0
*/

int main(void)
{
	int i, n1 = 1, n2 = 2, n3;

	printf("%d, %d, ", n1, n2);
	for (i = 1; i <= 50; i++)
	{
		n3 = n1 + n2;
		if (i == 50)
			printf("%d", n3);
		else
			printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
