#include "lists.h"
/**
 * delete_nodeint_at_index -  function that delete node at index.
 * Return:  1 if it succeeded, -1 if it failed.
 * @head: head of linked list.
 * @index: index.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp;
temp = *head;

if (temp == NULL)
{
return (-1);
}

if (index == 0)
{
free_listint2(head);
return (1);
}

temp = *head;
for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;
}
listint_t *to_delete = temp->next;
temp->next = temp->next->next;
free(to_delete);

return (1);
}
