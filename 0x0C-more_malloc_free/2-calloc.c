#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * Return:  pointer or NULL.
 * @nmemb: number.
 * @size: size. 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
for (j = 0; j < size; j++)
{
ptr[i * size + j] = 0;
}
}
return (ptr);
}
