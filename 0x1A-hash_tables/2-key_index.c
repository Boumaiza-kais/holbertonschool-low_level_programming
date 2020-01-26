#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: const unsigned char type
 * @size: unsigned long int type
 * Return: always success
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
