#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 *
 * @n: Parameter
 *
 * @...: Parameter that accepts a variable number of arguments
 *
 * Return: Always sum of all integers (success)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
if (n == 0)
{
return (0);
}
return (sum);
}
