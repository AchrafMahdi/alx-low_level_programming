#include "lists.h"
/**
 * add_nodeint_end - function that adds new node at the end of a linked list.
 * Return: the address of the new element, or NULL if it failed.
 * @head: head of linked list.
 * @n: int.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;


new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
