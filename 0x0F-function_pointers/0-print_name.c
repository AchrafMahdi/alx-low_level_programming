#include <stdlib.h>
/**
 * print_name - function that prints a name.
 *
 * Return: nothing.
 *
 * @name: name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
