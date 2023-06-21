#include <stdio.h>

/**
* main - Entry point, print first 98 fibonacci
*
* Return: 0
*/

int main(void)
{
	int i;
	long int n1 = 1, n2 = 2, n3;

	printf("%ld, %ld, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		n3 = n1 + n2;
		if (i == 98)
			printf("%ld", n3);
		else
			printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
