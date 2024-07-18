#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * Return:  pointer or NULL.
 * @s1: string.
 * @s2: string.
 * @n: number of bytes.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j;
char *combined = "";
if (s1 != NULL && s2 != NULL)
{
combined = malloc(strlen(s1) + n + 1);
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
}
if (combined == NULL)
{
return (NULL);
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
for (j = 0; s2[j] != '\0' && n >= strlen(s2); j++)
{
combined[j + i] = s2[j];
}
}
return (combined);
}
