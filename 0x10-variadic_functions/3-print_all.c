#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - funtion that prints anything
 *
 * @format: a list of types of arguments passed to the funtion
 *
 * @...: variable arguments
 */
void print_all(const char * const format, ...)
{
va_list arg;

char ch;
int i;
float f;
char *s;

int index = 0;

va_start(arg, format);

while (format[index] != '\0')
{
if (format[index] == 'c')
{
ch = va_arg(arg, int);
printf("%c", ch);
printf(", ");
}
else if (format[index] == 'i')
{
i = va_arg(arg, int);
printf("%d", i);
printf(", ");
}
else if (format[index] == 'f')
{
f = va_arg(arg, double);
printf("%f", f);
printf(", ");
}
else if (format[index]  == 's')
{
s = va_arg(arg, char*);
if (s == NULL)
printf("(nil)");
else
{
printf("%s", s);
}
}
index++;
}
va_end(arg);
printf("\n");
}
