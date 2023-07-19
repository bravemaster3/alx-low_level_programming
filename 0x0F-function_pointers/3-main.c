#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: double pointer to arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);

	/*printf("Address of Function%p\n", get_op_func(sign));*/
	if (get_op_func(sign) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (get_op_func(sign))(num1, num2));
	return (0);
}
