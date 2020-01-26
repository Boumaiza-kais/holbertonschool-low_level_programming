#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: const char type
 * Return: Always success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	for (; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key))
		return (tmp->value);
	}
	return (NULL);
}
