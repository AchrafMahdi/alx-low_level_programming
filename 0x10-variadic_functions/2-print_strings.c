#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints strings, followed by a new line.
 * Return: nothing.
 * 
 * @n: variadic inputs.
 * @separator: separator.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}
