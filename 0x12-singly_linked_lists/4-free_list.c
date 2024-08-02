#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * Return: nothing.
 * @head: head of linked list. 
 */

void free_list(list_t *head)
{
while (head->next != NULL)
{
free(head);
head = head->next;
}

}
