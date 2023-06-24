#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: parameter
 *
 * Return; Void
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar('/');
_putchar('\n');
}
}
