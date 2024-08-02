#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * Return: the address of the new element, or NULL if it failed.
 * @head: head of linked list.
 * @str: string.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *end;
list_t *temp;
int length = 0;
temp = *head;

end = malloc(sizeof(list_t));
if (end == NULL)
{
return (NULL);
}
end->str = strdup(str);
if (end->str == NULL)
{
free(end);
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
end->len = length;
end->next = NULL;

if (*head == NULL)
{
*head = end;
return (end);
}

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = end;
return (end);
}
