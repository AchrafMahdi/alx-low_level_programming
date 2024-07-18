#include <stdlib.h>
/**
 * create_array - function that returns a pointer to a new space in memory.
 * Return:  pointer to a new string which is a duplicate of the string str
 * @str: string.
 */
char *_strdup(char *str)
{
char *new_str = malloc(sizeof(char));
*new_str = str;
if (str == NULL)
{
    return (NULL);
}
if (*new_str == NULL)
{
    return (NULL);
}
return (new_str);
}
