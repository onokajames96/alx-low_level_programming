#include "lists.h"

/**
 *add_dnodeint_end - new node added at the end of a dlistint_t list.
 *@head: pointer
 *@n: integer.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	if (new == NULL)
	{
		free(new);
		return (new);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	return (*head);
}
