#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main function.
 * @argc: the number args.
 * @argv: the array of args.
 *  
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
char *ptr = (char*)main;
int i;
if (argc != 2)
{
printf("Error\n"), exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n"), exit(2);
}
while (i--)
{
printf("%02hhx%s", *ptr++, i ? " " : "\n");
}
return (0);
}
