#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * Return: pointer to dest.
 * @src: memory area.
 * @dest: memory area.
 * @n: number of times.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
