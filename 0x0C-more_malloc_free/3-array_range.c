#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * Return: Pointer or NULL.
 * @min: maximum.
 * @max: minimum.
 */
int *array_range(int min, int max)
{
int i;
int *arr;
int size;
if (min > max)
{
return NULL;
}
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
{
return NULL;
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return arr;
}
