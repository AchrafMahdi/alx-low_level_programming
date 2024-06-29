#include "main.h"

/**
 * print_square - prints square of #
 * @size: provided input
*/


void print_square(int size)
{
	int r, c;

if (size <= 0)
	{
		_putchar('\n');
	}
	else {
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}