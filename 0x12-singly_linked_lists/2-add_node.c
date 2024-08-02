#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * Return: the address of the new element, or NULL if it failed.
 * @head: head of linked list.
 * @str: string.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new;
int length = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
new->len = length;
new->next = *head;
*head = new;

return (new);
}
