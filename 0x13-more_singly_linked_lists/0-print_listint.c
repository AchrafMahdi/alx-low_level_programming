#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * Return: number of nodes.
 * @h: node list.
 */

size_t print_listint(const listint_t *h)
{
listint_t a;
int num = 0;
if (h == NULL)
{
return (0);
}
a.n = h->n;
a.next = h->next;

if (a.n == NULL)
{
printf("(nil)\n");
}
else
printf("%d\n", a.n);
num = 1;
if (a.next != NULL)
{
num += print_listint(a.next);
}

return (num);
}
