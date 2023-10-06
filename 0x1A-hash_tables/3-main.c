#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int i = -1;

	ht = hash_table_create(1024);
	i = hash_table_set(ht, "betty", "cool");
	printf("Betty ---- return = %d\n", i);

	i = hash_table_set(ht, "hetairas", "collides mentioner");
	printf("hetairas ---- return = %d\n", i);

	i = hash_table_set(ht, "mentioner", "collides hetairas");
	printf("mentioner ---- return = %d\n", i);

	

	i = hash_table_set(ht, NULL, "null key");
	printf("NULL key ---- return = %d\n", i);

	i = hash_table_set(ht, "null_value", NULL);
	printf("NULL value ---- return = %d\n", i);

	i = hash_table_set(ht, "", "empty key");
	printf("Empty key ---- return = %d\n", i);

	i = hash_table_set(ht, "empty_value", "");
	printf("Empty value ---- return = %d\n", i);
	return (EXIT_SUCCESS);
}
