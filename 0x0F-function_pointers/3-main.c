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
int n1, n2;
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
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
if (!n2 && (argv[2][0] == '%' || argv[2][0] == '/'))
{
printf("Error\n");
exit(100);
}
printf("%d\n",action(n1,n2));
return (0);
}
