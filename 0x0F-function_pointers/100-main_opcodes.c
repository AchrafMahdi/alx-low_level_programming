#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function.
 * Return: 0.
 * 
 * @argc: arg counter.
 * @argv: array of args.
 */
int main(int argc, char *argv[])
{
unsigned char *ptr;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (atoi(argv[1]) < 0)
{
printf("Error\n");
return (2);
}

ptr = (unsigned char *)main;
i = 0;

while (i < atoi(argv[1]))
{
printf("%02x", ptr[i]);
if (i != atoi(argv[1]) - 1)
{
printf(" ");
}
i++;
}
printf("\n");

return (0);
}
