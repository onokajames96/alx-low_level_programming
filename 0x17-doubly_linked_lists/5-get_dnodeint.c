#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth node
 *of a dlistint_t linked listi
 *@head: the head
 *@index: the index
 *
 * Return: the node does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int num = 0;

while (head != NULL)
{
if (num == index)
return (head);
num++;
head = head->next;
}
return (NULL);
}

