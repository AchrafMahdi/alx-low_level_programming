#include <stdio.h>
/**
 * print_chessboard - function that prints the chessboard.
 *@a: char
 */
void print_chessboard(char (*a)[8])
{
unsigned int i = 0;
unsigned int j = 0;

for (;i < 8; i++)
{
for (;j < 8; j++)
{
printf("%c",a[i][j]);
}
printf("\n");
}
}
