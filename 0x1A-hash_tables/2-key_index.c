#include "hash_tables.h"

/**
 * key_index - calculates array index given a key
 * @key: a key given as string
 * @size: size of the array
 * Return: an index where to store the item in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
