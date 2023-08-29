#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: the head.
 *@idx: the index
 *@n: value.
 *
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *prev, *new_list;

if (idx == 0)
return (add_dnodeint(h, n));

if (!h)
return (NULL);

prev = *h;

if (!prev)
return (NULL);

while (--idx && prev->next)
prev = prev->next;

if (idx)
return (NULL);

new_list = malloc(sizeof(*new_list));
if (!new_list)
return (NULL);

new_list->n = n;
new_list->prev = prev;
new_list->next = prev->next;

if (prev->next)
prev->next->prev = new_list;

prev->next = new_list;

return (new_list);
}
