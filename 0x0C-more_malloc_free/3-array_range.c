#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * Return: Pointer or NULL.
 * @min: minimum.
 * @max: maximum.
 */
int *array_range(int min, int max)
{
int *arra;
unsigned int i;
unsigned int size;
if (min > max)
{
return (NULL);
}
size = (max - min) + 1;
arra = malloc(size * sizeof(int));
if (arra == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arra[i] = min + i;
}
return (arra);
}
