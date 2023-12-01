#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Get the index at which the key
 * should be stored in the hash table
 * @key: The key (string) for which the index is to be found
 * @size: The size of the hash table array
 *
 * Return: The index at which the key should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	return (hash_value % size);
}
