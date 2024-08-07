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
listint_t *temp;

temp = *head;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}


for (i = 0; temp != NULL && i < idx - 1; i++)
{
temp = temp->next;
}

if (temp == NULL)
{
free(new);
return (NULL);
}

new->next = temp->next;
temp->next = new;

return (new);
}
