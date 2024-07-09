#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int j = 0;
int i = 0;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
count++;
j++;
}
i++;
j = 0;
}
return (count);
}
