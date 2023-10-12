#include "main.h"

/**
 * print_alphabet_x10  -  a function that prints 10x the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
