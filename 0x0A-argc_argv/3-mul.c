#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Arguments count
 * @argv: vector of pointers to arguments names
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
