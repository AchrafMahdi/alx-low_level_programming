#include "main.h"

/**
 * print_alphabet_x10  -  a function that prints 10x the alphabet
 *
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (char letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
