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
listint_t *toBeDeleted;

if (head == NULL || *head == NULL)
{
return (-1);
}

temp = *head;

if (index == 0)
{

*head = temp->next;
free(temp);
return (1);
}


for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;
}

if (temp == NULL)
{
return (-1);
}

toBeDeleted = temp->next;
temp->next = temp->next->next;
free(toBeDeleted);

return (1);
}
