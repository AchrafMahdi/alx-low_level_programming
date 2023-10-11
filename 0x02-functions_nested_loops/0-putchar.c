#include "main.h"

/**
 * main - the main function
 * Return: Always 0
*/

int main(void)
{
	char characters[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(characters[i]);
	}
	_putchar('\n');

	return (0);
}
