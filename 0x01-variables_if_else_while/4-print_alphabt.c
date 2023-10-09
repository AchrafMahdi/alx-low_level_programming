#include <stdio.h>

/**
 * main - the main function
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
