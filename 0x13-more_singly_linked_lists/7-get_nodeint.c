#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list.
 * Return: nth node of a listint_t linked list.
 * @head: head of linked list.
 * @index: index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
{
return (head);
}
head = head->next;
}

return (NULL);
}
