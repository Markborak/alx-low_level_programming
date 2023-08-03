#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits needed to flip
 * to get from one number to another.
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: Always number of bits needed to be fliped (success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
