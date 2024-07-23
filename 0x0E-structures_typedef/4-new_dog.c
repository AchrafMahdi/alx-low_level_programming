#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: string.
 * Return: length of string.
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
 * _strcpy - copy a string.
 * @dest: destination buffer.
 * @src: source string.
 * Return: Pointer.
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
struct dog *woof;

woof = malloc(sizeof(struct dog));
if (woof == NULL)
{
return (NULL);
}
woof->name = malloc(sizeof(char) * (_strlen(name) + 1));
woof->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (woof->name == NULL || woof->owner == NULL)
{
free(woof);
return (NULL);
}
woof->name = _strcpy(woof->name, name);
woof->age = age;
woof->owner = _strcpy(woof->owner, owner);
return (woof);
}
