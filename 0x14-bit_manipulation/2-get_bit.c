#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: Parameter
 *
 * @index: index starting from 0 to the wanted bit
 *
 * Return: Always the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int numBits = sizeof(unsigned long int) * 8;
unsigned long int mask;
int bitValue;
if (index >= numBits)
{
return (-1);
}
mask = 1UL << index;
bitValue = (n & mask) >> index;
return (bitValue);
}
