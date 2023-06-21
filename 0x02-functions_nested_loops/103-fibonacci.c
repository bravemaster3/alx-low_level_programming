#include <stdio.h>

/**
* main - Entry point, print some fibonacci
*
* Return: 0
*/

int main(void)
{
	long int n1 = 1, n2 = 2, n3, sum = 2;

	printf("%ld, ", n1);
	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
