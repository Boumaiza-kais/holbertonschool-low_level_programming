#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp;
unsigned int i = 0;

if (!ht)
return;
while (i < ht->size)
{
temp = ht->array[i];
while (temp != NULL)
{
free(temp->key);
free(temp->value);
free(temp);
}
i++;
}
free(ht->array);
free(ht);
}
