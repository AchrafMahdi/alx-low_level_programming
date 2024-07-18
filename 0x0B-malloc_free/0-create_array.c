#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * Return: pointer to the array, or NULL if it fails
 * @size: size of array.
 * @c: char.
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size * sizeof(char));
unsigned int i;
if (size == 0)
{
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
