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

temp = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
while (temp->next != NULL)
{
temp = temp->next;
}
new->n = n;
new->next = NULL;
temp->next = new;
return (new);
}
