#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog.
 * @d: struct dog.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n",d->name ? d->name : "(nil)");
if (d->age != NULL)
{
printf("Age: %f",d->age);
}
else
{
printf("Age: (nil)\n");
}
printf("Owner: %s\n",d->owner ? d->owner : "(nil)");
}
}
