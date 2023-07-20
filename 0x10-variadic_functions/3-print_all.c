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
int not_first = 0;

va_start(arg, format);

while (format[index] != '\0')
{
if (not_first)
printf(", ");
switch (format[index])
{
case 'c':
ch = va_arg(arg, int);
printf("%c", ch);
not_first = 1;
break;
case 'i':
i = va_arg(arg, int);
printf("%d", i);
not_first = 1;
break;
case 'f':
f = va_arg(arg, double);
printf("%f", f);
not_first = 1;
break;
case 's':
s = va_arg(arg, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
not_first = 1;
break;
default:
not_first = 0;
break;
}
index++;
}
va_end(arg);
printf("\n");
}
