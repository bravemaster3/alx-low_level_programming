#include <stdio.h>

/**
*main - Entry point
*This function prints numbers
*Return: 0 on success
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
