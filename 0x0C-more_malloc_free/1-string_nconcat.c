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

if (n >= strlen(s2))
{
n = strlen(s2);
}

if (s1 != NULL && s2 != NULL)
{
combined = malloc(strlen(s1) + n + 1);
}
else if (s1 == NULL && s2 != NULL)
{
combined = malloc(n + 1);
}
else if (s1 != NULL && s2 == NULL)
{
combined = malloc(strlen(s1) + 1);
}
else
{
combined = malloc(1);
}

if (combined == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
for (; s1[i] != '\0'; i++)
{
combined[i] = s1[i];
}
}

if (s2 != NULL)
{
for (j = 0; j < n; j++)
{
combined[j + i] = s2[j];
}
}

combined[i + n] = '\0'; // Add null terminator at the end

return (combined);
}
