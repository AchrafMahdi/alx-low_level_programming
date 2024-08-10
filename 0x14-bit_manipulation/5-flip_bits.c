#include "main.h"
/**
 * flip_bits - function that returns number of bits you would need to flip.
 * Return: number of bits.
 * @n: int.
 * @m: int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dif;
unsigned int count = 0;

dif = n ^ m;

while (dif > 0)
{
if (dif & 1)
{
count++;
}
dif >>= 1;
}

return (count);
}
