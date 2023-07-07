#include "stdio.h"

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: vector of pointers to argument names
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
