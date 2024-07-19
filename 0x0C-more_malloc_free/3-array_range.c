#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * Return: Pointer or NULL.
 * @min: minimum.
 * @max: maximum.
 */
int *array_range(int min, int max)
{
int *p;
int range, i;

if (min > max)
return (NULL);
range = max - min + 1;
p = malloc(range * sizeof(*p));
if (p == NULL)
return (NULL);
for (i = 0; i < range; min++, i++)
p[i] = min;
return (p);
}
