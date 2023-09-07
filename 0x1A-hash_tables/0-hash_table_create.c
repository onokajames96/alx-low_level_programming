#include "hash_tables.h"

/**
 * hash_table_create - A function that Creates a hash table.
 * @size: the size.
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int x = 0;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; x < size; x++)
		new->array[x] = NULL;

	return (new);
}
