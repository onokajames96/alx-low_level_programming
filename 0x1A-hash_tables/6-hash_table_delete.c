#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *tmp;

while (x < ht->size)
{
while (ht->array[x] != NULL)
{
tmp = ht->array[x]->next;
free(ht->array[x]->key);
free(ht->array[x]->value);
free(ht->array[x]);
ht->array[x] = tmp;
}
x++;
}
free(ht->array);
free(ht);
}
