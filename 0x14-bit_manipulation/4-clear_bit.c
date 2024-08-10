#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * Return: 1 if it worked, or -1 if an error occurred.
 * @n: int.
 * @index: int.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit_m;

if (index >= (sizeof(*n) * 8))
return (-1);

bit_m = ~(1 << index);
*n |= bit_m;

return (1);
}
