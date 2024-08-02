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

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return(NULL);
}
new->len = _strlen(str);
new->next = *head;
*head = new;

return (new);
}

/**
 * _strlen - function that returns the length of a string.
 * Return: length of string.
 * @s: pointer to sring.
 */

int _strlen(const char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
