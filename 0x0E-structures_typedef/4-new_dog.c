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
int len1;
int len2;

if (name == NULL || owner == NULL)
{
return (NULL);
}

p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}

len1 = _strlen(name);
len2 = _strlen(owner);

name_2 = malloc(len1 + 1);
owner_2 = malloc(len2 + 1);

if (name_2 == NULL || owner_2 == NULL)
{
free(name_2);
free(owner_2);
free(p);
return (NULL);
}

p->name = _strcpy(p->name, name);
p->age = age;
p->owner = _strcpy(p->owner, owner);

return (p);
}
