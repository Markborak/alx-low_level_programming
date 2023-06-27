#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 *
 * @a: Parameter
 *
 * @n: Parameter
 */
void print_array(int *a, int n)
{
for (n = 0; a[n] != '\0'; n++)
{
_putchar(a[n]);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
