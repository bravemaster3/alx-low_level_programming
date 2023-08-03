#include "main.h"

/**
 * flip_bits - calculates the number of bits to flip to get n to m
 * @n: first UL
 * @m: second UL
 * Return: the count of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
