#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 *
 * Return: void
 *
 * @d: struct
 */

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->owner);
free(d->name);
free(d);
}
