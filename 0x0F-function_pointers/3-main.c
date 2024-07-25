#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function.
 *
 * Return: 0.
 *
 * @argc: number of arg.
 * @argv: array of arg.
 */

int main(int argc, char *argv[])
{
int (*action)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
action = get_op_func(argv[2]);
if (!action)
{
printf("Error\n");
exit(99);
}
printf("%d\n",action(atoi(argv[1]),atoi(argv[3])));
return (0);
}
