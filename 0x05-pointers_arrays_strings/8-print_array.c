#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 *
 * @a: Parameter
 *
 * @n: Parameter
 */
void print_array(int *a, int n)
{
int i;
if (n == 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < (n - 1))
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
