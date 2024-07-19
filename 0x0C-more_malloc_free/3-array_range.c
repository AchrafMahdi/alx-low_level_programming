#include <stdlib.h>
/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */
int *array_range(int min, int max)
{
int *arr;
unsigned int i;
unsigned int size;
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
