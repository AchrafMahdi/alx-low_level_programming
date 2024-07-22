#include <stdlib.h>
#include <stdio.h>
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
printf("Name: %s\n",d->name != NULL ? d->name : "(nil)");
if (d->age >= 0)
{
printf("Age: %f",d->age);
}
else
{
printf("Age: (nil)\n");
}
printf("Owner: %s\n",d->owner != NULL ? d->owner : "(nil)");
}
}
