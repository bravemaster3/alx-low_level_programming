#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: double pointer to the array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;
	int (*main_p)(int, char **) = &main;
	char *ptr = (char *)main_p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x", ptr[i] & 0xff);
		if (i == (atoi(argv[1]) - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
