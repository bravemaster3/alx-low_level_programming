#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: array of pointers to argument names
 * Return: 0 on success, 1 if the argument is negative
 */

int main(int argc, char **argv)
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent <= 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", (cent / 25) + (cent % 25) / 10 + ((cent % 25) % 10) / 5 +
					   (((cent % 25) % 10) % 5) / 2 +
					   ((((cent % 25) % 10) % 5) % 2) / 1);
	return (0);
}
