#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 *@haystack: first char
 *@needle: second char
 *
 * Return: result or null
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0;
unsigned int j = 0;
if (*needle == '\0')
{
return (haystack);
}
for (; haystack[i] != '\0'; i++)
{
for (; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
}
