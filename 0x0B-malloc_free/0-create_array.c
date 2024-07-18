#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * Return: pointer to the array, or NULL if it fails
 * @size: size of array.
 * @c: char.
 */
char *create_array(unsigned int size, char c)
{
if (size == NULL){
    return NULL;
}
char *array = malloc(size * sizeof(char));
if (array == NULL){
    return NULL;
}
for (unsigned int i = 0; i < size; i++)
{
    array[i] = 'c';
}
return (array);
}
