#include <stdio.h>
/**
 * print_chessboard - function that prints the chessboard.
 *@a: char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
unsigned int i;
unsigned int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c",a[i][j]);
}
printf("\n");
}
}