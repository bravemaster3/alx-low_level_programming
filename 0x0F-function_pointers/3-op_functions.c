#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers a/b
 * @a: first integer
 * @b: second integer
 * Return: the integer division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulo a%b
 * @a: first integer
 * @b: second integer
 * Return: the modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
