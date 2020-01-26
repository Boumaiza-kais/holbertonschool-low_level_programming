#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;
	int k = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (k == 0)
                        printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			k = 1;
		}
	}
	printf("}\n");
}
