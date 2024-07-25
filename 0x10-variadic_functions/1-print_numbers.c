#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * Return: nothing.
 * @n: variadic inputs.
 * @separator: separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

for (i = 0; i < n; i++)
{
if (separator != NULL)
{
printf("%c%d",separator,va_arg(args,const unsigned int));
}
else
{
printf("%d",separator,va_arg(args,const unsigned int));
}
}
printf("\n");
}
