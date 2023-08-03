#include "main.h"

/**
 * get_bit - gets the value of a bit at an index
 * @index: index of the bit starting from 0
 * @n: the number whose bit we want to retrieve
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8, i;
	unsigned long int mask;

	if (index >= bits)
		return (-1);
	for (i = 0; i < bits; i++)
	{
		mask = 1UL << i;
		if (i == index)
			return (n & mask ? 1 : 0);
	}
	return (-1);
}
