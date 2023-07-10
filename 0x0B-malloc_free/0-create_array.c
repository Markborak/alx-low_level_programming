#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates array of chars, initializes it with a specific char
 *
 * @size: Parameter
 *
 * @c: Parameter
 *
 * Return: NULL if size = 0 (always 0 (success))
 */
char *create_array(unsigned int size, char c)
{
char *array = (char *) malloc(sizeof(char) * size);
unsigned int i;
if (array != NULL)
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
return (array);
if (size == 0)
{
return (NULL);
}
}
