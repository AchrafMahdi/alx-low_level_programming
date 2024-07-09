#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 *
 * Return: char with result
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
