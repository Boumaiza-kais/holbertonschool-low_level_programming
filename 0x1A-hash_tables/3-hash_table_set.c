#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table
 * @key: const char type
 * @value: const char type
 * Return: always success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
        hash_node_t *new_node, *tmp_node;
	

	if (key == NULL || ht == NULL ||  || value == NULL || *key == '\0')
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	
        tmp_node = ht->array[i];
	for (; tmp_node != NULL; tmp_node = tmp_node->next)
	{
		if (!strcmp(tmp_node->key, key))
		{
			free(tmp_node->value);
			free(new_node);
			tmp_node->value = strdup(value);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t*));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node = NULL;
        new_node = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
