#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: array of pointers to argument names
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
