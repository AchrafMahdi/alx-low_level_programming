
#include "main.h"

/**
 * _isupper - the function check if c is upper
 * @c: alphabet input
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
