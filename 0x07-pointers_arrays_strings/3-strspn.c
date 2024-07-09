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
int found;
int i;
int j;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
{
break;
}
count++;
}
return count;
}
