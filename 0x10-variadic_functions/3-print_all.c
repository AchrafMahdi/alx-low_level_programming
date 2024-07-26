#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * Return: nothing.
 * @format: format string.
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i;
i = 0;

va_start(args, format);
while (format && format[i])
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
i++;
continue;
}

if (format[i + 1] != '\0')
{
printf(", ");
}

i++;
}

va_end(args);
printf("\n");
}
