#include <stdio.h>

/**
* main - Entry point, print first 98 fibonacci
*
* Return: 0
*/

int main(void)
{
	int i;
	long long int n1 = 1, n2 = 2, n3;

	printf("%lld, %lld, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		n3 = n1 + n2;
		if (i == 98)
			printf("%lld", n3);
		else
			printf("%lld, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
