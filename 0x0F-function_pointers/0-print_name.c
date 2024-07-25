#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 *
 * Return: nothing.
 *
 * @name: name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
f(name);
}
}
