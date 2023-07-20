#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 *
 * @separator: string to be printed between strings
 *
 * @n: number of strings passed as arguments
 *
 * @...: variable string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
const char *str;
unsigned int i;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
str = va_arg(arg, const char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("nil");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
