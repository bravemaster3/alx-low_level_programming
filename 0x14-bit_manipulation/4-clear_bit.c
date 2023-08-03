#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: pointer to the UL
 * @index: index of the bit to set to 1
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
