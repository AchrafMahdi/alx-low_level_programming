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
char operation;
char res;
int (*action)(int, int);
operation = *(argv[2]);
action = get_op_func(&operation);
res = action(atoi(argv[1]),atoi(argv[3]));
printf("%d\n",res);
return (0);
}
