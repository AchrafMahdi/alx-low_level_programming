#include "lists.h"
/**
 * free_listint2 - unction that frees a listint_t list.
 * Return: nothing.
 * @head: head of linked list.
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
while (*head != NULL)
{
temp = head;
head = (*head)->next;
free(temp);
}
*head = NULL;
}
