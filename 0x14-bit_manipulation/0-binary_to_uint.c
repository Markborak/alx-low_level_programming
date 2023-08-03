#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: Always an unsigned int from a binary  number(success)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
char c;
if (b == NULL)
{
return (0);
}
while (*b != '\0')
{
c = *b;
if (c == '0' || c == '1')
{
result = (result << 1) | (c - '0');
b++;
}
else
{
return (0);
}
}
return (result);
}
