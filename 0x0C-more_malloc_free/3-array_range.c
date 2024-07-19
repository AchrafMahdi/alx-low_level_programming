#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * Return:  pointer or NULL.
 * @min: min.
 * @max: max.
 */
int *array_range(int min, int max)
{
int size;
int i;
int *arr;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}