#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = (1UL << (sizeof(unsigned long int)) * (8 - 1));
int found_one = 0;
while (mask)
{
if (n & mask)
{
putchar('1');
found_one = 1;
}
else if (found_one)
{
putchar('0');
}
mask >>= 1;
}
if (!found_one)
{
putchar('0');
}
}
