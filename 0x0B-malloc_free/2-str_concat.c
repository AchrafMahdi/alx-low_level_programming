#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * Return:  pointer or NULL.
 * @s1: string.
 * @s2: string.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i;
unsigned int j;
unsigned int length = 0;
char *combined = NULL;
for (i = 0; s1[i] != '\0'; i++)
{
length += 1;
}
for (i = 0; s2[i] != '\0'; i++)
{
length += 1;
}
combined = malloc(length + 1);
if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
{
combined[i] = s1[i];
}
}
if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++)
{
combined[j + i] = s2[i];
}
}
if (combined == NULL)
{
return (NULL);
}
return (combined);
}
