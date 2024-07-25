#include <stdlib.h>
/**
 * array_iterator - function that executes function on each element of array.
 *
 * Return: nothing.
 *
 * @array: the array that the function will run on each of its elements.
 * @size: the size of the array.
 * @action: the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
