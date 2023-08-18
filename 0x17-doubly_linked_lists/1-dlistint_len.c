#include "lists.h"
/**
 *dlistint_len -Returns the number of elements in a linked dlistint_t list.
 *@h: pointer
 *
 * Return: Number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while(h != NULL)
	{
		num++;
		h = h->next;
	}
	return num;
}
