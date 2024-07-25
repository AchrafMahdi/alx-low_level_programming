#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function.
 * Return: 0 on success.
 * 
 * @argc: arg counter.
 * @argv: array of args.
 */
int main(int argc, char **argv)
{
char *ptr = (char*)main;
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
while (i--)
{
printf("%02hhx%s", *ptr++, i ? " " : "\n");
}
return (0);
}
