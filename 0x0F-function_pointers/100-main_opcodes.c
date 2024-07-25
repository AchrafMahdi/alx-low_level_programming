#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main function.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * 
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
    char *ptr = (char *)main;
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
