#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * Return: pointer to the memory area s
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
