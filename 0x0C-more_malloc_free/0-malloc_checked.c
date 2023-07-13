#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: Parameter
 *
 * Return: Always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
