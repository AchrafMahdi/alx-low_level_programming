#include "lists.h"
/**
 * add_nodeint - function that adds new node at the beginning of a linked list.
 * Return: the address of the new element, or NULL if it failed.
 * @head: head of linked list.
 * @n: int.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
