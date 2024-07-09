#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * @s: string. 
 * @c: character.
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;

if (c == s[i])
{
return (s + i);
}

for (; s[i] != '\0'; i++)
{

if (c == s[i])
{
return (s + i);
}

}

if (c == '\0')
{
return (s + i);
}

return (NULL);
}
