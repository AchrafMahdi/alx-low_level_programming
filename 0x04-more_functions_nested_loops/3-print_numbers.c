#include <stdio.h>

/**
 * _puts - that prints a string, followed by a new line. 
 * @str: pointer to a string
 */

void _puts(char *str)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);

	_putchar('\n');
}
