#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * Return:  pointer or NULL.
 * @s1: string.
 * @s2: string.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0;
unsigned int j;
char *combined = NULL;
if (s1 != NULL && s2 != NULL)
{
combined = malloc(strlen(s1) + strlen(s2) + 1);
}
if (s1 == NULL && s2 != NULL)
{
combined = malloc(strlen(s2) + 1);
}
if (s1 != NULL && s2 == NULL)
{
combined = malloc(strlen(s1) + 1);
}
if (s1 == NULL && s2 == NULL)
{
combined = malloc(1);
*combined = "";
}
if (s1 != NULL)
{
for (i = i; s1[i] != '\0'; i++)
{
combined[i] = s1[i];
}
}
if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++)
{
combined[j + i] = s2[j];
}
}
if (combined == NULL)
{
return (NULL);
}
return (combined);
}
