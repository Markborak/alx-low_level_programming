#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: Parameter
 *
 * @size: Parameter
 *
 * Return: Always 0 success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size = nmemb * size;
void *ptr = malloc(total_size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, total_size);
return (ptr);
}
