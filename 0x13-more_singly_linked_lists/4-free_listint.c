#include "lists.h"
/**
 * free_listint - unction that frees a listint_t list.
 * Return: nothing.
 * @head: head of linked list.
 */

void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->n);
free(temp);
}

}
