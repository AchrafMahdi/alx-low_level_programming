#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * Return: number of nodes.
 * @h: node list.
 */

size_t print_list(const list_t *h)
{
list_t a;
int num = 0;
if (h == NULL)
{
return (0);
}
a.str = h->str;
a.len = h->len;
a.next = h->next;

if (a.str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", a.len, a.str);
num = 1;
if (a.next != NULL)
{
num += print_list(a.next);
}

return (num);
}
