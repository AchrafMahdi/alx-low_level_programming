#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 * Return: number of elements.
 * @h: linked list.
 */

size_t list_len(const list_t *h)
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
