#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * Return: pointer to the first occurrence of the character c in s, or NULL
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

if (c == '\0')
{
return (s + i);
}

return (NULL);
}
