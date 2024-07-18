#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * Return:  pointer or NULL.
 * @s1: string.
 * @s1: string.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i;
unsigned int length = 0;
char *combined = NULL;
if (s1 == NULL || s2 == NULL)
{
    return (NULL);
}
for (i = 0; s1[i] != '\0')
{
combined[i] = s1[i];
length += 1;
}
for (i = i; s2[i] != '\0')
{
combined[i] = s2[i];
length += 1;
}
combined = malloc(length + 1);
if (combined == NULL)
{
return (NULL);
}
return (combined);
}
