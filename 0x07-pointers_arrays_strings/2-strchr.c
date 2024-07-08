#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * @s: string. 
 * @c: character.
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (c == s[i])
{
    return (s + i);
}
}
return (NULL);
}
