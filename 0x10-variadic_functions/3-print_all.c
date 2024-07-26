#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * Return: nothing.
 * @format: format.
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i;
i = 0;

while (format[i])
{
str = va_arg(args, char *);

switch (format[i])
{
case 'c':
    printf("%c", str);
    break;
case 'i':
    printf("%d", str);
    break;
case 'f':
    printf("%f", str);
    break;
case 's':
    if (str != NULL)
    {
    printf("%s", str);
    break;
    }
    printf("(nil)");
    break;
default:
    break;
}

if (format[i] != NULL && format[i + 1] != NULL)
{
printf(", ");
}

i++;
}

printf("\n");
}
