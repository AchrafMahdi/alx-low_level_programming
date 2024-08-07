#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a linked list.
 * Return: head node’s data (n).
 * @head: head of linked list.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
{
return (0);
}
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
