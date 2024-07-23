#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length += 1;
}

return (length);
}

/**
 * _strcpy - Copy a string to another
 * @dest: The destination buffer
 * @src: The source string
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i += 1;
}
dest[i] = '\0';

return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: name of dog.
* @age: age of dog.
* @owner: owner of dog.
* Return: pointer or NULL.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
char *name_2;
char *owner_2;

if (name == NULL || owner == NULL)
{
return (NULL);
}

p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}

name_2 = malloc(_strlen(name) + 1);
owner_2 = malloc(_strlen(owner) + 1);

if (name_2 == NULL || owner_2 == NULL)
{
free(name_2);
free(owner_2);
free(p);
return (NULL);
}
_strcpy(name_2, name);
_strcpy(owner_2, owner);

p->name = name_2;
p->age = age;
p->owner = owner_2;

return (p);
}
