#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s:char
 * @accept:char 
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int j = 0;
for (; *s != '\0'; s++)
{
for (j; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
}
return (NULL);
}
