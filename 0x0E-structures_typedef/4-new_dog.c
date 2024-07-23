#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: pointer or null.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
if (owner == NULL)
{
free(name);
free(p);
return (NULL);
}
if (name == NULL)
{
free(owner);
free(p);
return (NULL);
}
p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
