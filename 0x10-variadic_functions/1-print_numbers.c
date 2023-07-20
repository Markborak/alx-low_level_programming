#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 *
 * @separator: Parameter (string printed btn numbrs)
 *
 * @n: Parameter (number of itegers passed to the function)
 *
 * @...: variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int num;
unsigned int i;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
num = va_arg(arg, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
