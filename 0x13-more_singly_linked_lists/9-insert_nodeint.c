#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts new node at given position.
 * Return:  the address of the new node, or NULL if it failed.
 * @head: head of linked list.
 * @idx: index.
 * @n: integer.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

if (idx == 0)
{
(*head)->n = n;
(*head)->next = NULL;
}

new->n = n;

for (i = 0; head != NULL; i++)
{
if (i == idx - 1)
{
new->next = (*head)->next;
(*head)->next = &new;
}
}
return (head);
}
