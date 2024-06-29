#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: provided input
*/


void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (s = 0; s < p; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
