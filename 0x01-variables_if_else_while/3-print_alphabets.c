#include <stdio.h>

/**
 * main - the main function
 * Return: Always 0
*/

int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}
	putchar('\n');
	return (0);
}
