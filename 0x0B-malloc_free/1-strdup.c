#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a new space in memory.
 * Return:  pointer to a new string which is a duplicate of the string str
 * @str: string.
 */
char *_strdup(char *str)
{
char *new_str = malloc(strlen(str));
unsigned int i;
if (str == NULL)
{
return (NULL);
}
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
