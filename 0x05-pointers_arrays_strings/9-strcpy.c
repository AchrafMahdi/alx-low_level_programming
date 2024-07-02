#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to dest
 * Return: Pointer to dest
 * @src: Pointer to the source string
 * @dest: Pointer to the destination buffer
 */
char *_strcpy(char *dest, const char *src)
{
char *a = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (a);
}
