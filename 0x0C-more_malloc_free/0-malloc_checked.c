#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * Return: pointer or exit with 98.
 * @b: size.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
