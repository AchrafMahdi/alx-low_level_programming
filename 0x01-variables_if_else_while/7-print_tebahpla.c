#include <stdio.h>

/**
 * main - the main function
 * Return: Always 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		puthchar(letter);
		letter++;
	}
	return (0);
}
