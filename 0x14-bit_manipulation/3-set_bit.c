#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer to the UL
 * @index: index of the bit to set to 1
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits)
		return (-1);

	mask = 1UL << index;
	*n = (*n & ~mask) | mask;
	return (1);
}
