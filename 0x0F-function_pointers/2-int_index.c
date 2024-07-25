#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 *
 * Return: nothing.
 *
 * @array: the array that the function will run on each of its elements.
 * @size: the size of the array.
 * @cmp: the function.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
int res;
if (size <= 0)
{
return (-1);
}
if (array != NULL && size > 0 && cmp != NULL)
{
for (i = 0; i < size; i++)
{
res = cmp(array[i]);
if (res != 0)
{
return (i);
}
}
}
return (-1);
}
