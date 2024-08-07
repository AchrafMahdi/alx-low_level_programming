#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a new space in memory.
 * Return:  pointer to a new string which is a duplicate of the string str
 * @str: string.
 */
char *_strdup(char *str)
{
unsigned int i;
unsigned int length = 0;
char *new_str = NULL;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
length += 1;
}
new_str = malloc(length + 1);
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
