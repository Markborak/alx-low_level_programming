#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: Parameter
 *
 * @index:  is the index, starting from 0 of the bit you want to set
 *
 * Return: Always 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int numBits = sizeof(unsigned long int) * 8;
unsigned long int mask;
if (index >= numBits)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}
