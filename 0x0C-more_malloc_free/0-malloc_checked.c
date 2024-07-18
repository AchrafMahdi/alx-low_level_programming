#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * Return: pointer or exit with 98.
 * @b: size of bytes.
 */
void *malloc_checked(unsigned int b)
{
char *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
