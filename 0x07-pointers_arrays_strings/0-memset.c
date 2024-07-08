/**
 * _memset - function that fills memory with a constant byte.
 * Return: pointer to the memory area s
 * @s: pointer to memory area
 * @b: constant byte.
 * @n: number of times b is repeated.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
