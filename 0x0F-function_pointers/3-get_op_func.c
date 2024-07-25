#include <stdlib.h>
#include "3-calc.h"
/**
 * int_index - function that searches for an integer.
 *
 * Return: nothing.
 *
 * @array: the array that the function will run on each of its elements.
 * @size: the size of the array.
 * @cmp: the function.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

for (i = 0; i < 5; i++)
{
if (s != NULL && ops[i].op == s && ops[i].f != NULL)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
