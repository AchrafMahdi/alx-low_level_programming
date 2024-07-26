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
int i = 0;
char *str;
va_start(args, format);
while (format[i])
{


switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
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

va_end(args);
printf("\n");
}
