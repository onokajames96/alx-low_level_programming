#include "hash_tables.h"

/**
 * hash_table_print - that prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
int first_pair = 1;
hash_node_t *node;

if (ht == NULL)
return;

printf("{");
for (x = 0; x < ht->size; x++)
{
node = ht->array[x];
while (node != NULL)
{
if (!first_pair)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
first_pair = 0;
node = node->next;
}
}
printf("}\n");
}
