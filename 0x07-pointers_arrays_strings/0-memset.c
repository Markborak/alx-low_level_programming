#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer to a memmory area
 *
 * @b: Parameter
 *
 * Return: Always s (sucess)
 *
 * @n: number of malloc areas
 */
char *_memset(char *s, char b, unsigned int n)
{

for (; n > 0; s++, n--)
{
*s = b;
}
return (s);
}
