#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
int s1 = 0;
int s2 = 0;
unsigned int i;
for (i = 0; i < size; i++)
{
s1 += a[(i * size) + i];
s2 += a[(i * size) + (size - i - 1)];
}
printf("%d, %d\n", s1, s2);
}
