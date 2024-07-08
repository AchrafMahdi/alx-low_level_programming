#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * @s: string.
 * @c: character.
 */
char *_strchr(char *s, char c)
{
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
