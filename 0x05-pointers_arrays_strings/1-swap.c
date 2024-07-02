#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @b: pointer to an integer
 * @a: pointer to an integer
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
