#include "lists.h"

/**
 *print_dlistint -prints all the elements of a dlistint_t list.
 *@h : head pointer
 *
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int element = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}
	return (element);
}
