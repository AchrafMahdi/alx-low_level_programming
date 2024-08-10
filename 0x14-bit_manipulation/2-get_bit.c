#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * Return: the value of the bit at index index or -1 if an error occured.
 * @n: int.
 * @index: int.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit_m = 1;

if (index > sizeof(n) * 8)
{
return (-1);
}

bit_m <<= index;

if (!(bit_m & n))
{
return (0);
}
else
{
return (1);
}
}
