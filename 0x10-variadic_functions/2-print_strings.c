#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints strings, followed by a new line.
 * Return: nothing.
 * @n: variadic inputs.
 * @separator: separator.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (va_arg(args, char *) != NULL)
{
printf("%s", va_arg(args, char *));
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
