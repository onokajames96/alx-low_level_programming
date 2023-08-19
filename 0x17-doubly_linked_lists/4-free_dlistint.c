#include "lists.h"
/**
 *free_dlistint - Frees a dlistint_t list.
 *@h: pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	if (node != NULL)
	{
		dlistint_t *next = node->next;
		 free(node);
		 node = next;
	}
}
