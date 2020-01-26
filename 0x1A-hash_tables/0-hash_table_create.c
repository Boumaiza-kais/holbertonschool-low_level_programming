#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: unisgned long int type
 * Return: always success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab;

	if (size <= 0)
		return (NULL);
	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)
	{
		free(hash_tab);
		return (NULL);
	}
	hash_tab->size = size;
	return (hash_tab);
}
