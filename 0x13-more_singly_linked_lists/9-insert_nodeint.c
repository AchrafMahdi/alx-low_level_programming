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
listint_t *temp;
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

for (i = 0; head != NULL; i++)
{
temp = *head;
if (i == idx)
{
new->n = temp->n;
new->next = temp->next;
(*head)->n = n;
(*head)->next = &new;
}
head = (*head)->next;
}

return (head);
}
