#include "lists.h"
/**
 * print_listint - function that returns number of elements in a linked list.
 * Return: number of elements.
 * @h: node list.
 */

size_t listint_len(const listint_t *h)
{
int num = 0;
if (h == NULL)
{
return (0);
}
num = 1;
if (h->next != NULL)
{
num += list_len(h->next);
}

return (num);
}
