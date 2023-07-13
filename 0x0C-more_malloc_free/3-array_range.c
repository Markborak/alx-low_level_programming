#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 *
 * @min: Parameter
 *
 * @max: Parameter
 *
 * Return: Always 0 (success)
 */
int *array_range(int min, int max)
{
int *arr = (int *) malloc((max - min + 1) * sizeof(int));
int i;
if (arr == NULL)
{
return (NULL);
}
if (min > max)
{
return (NULL);
}
for (i = 0; i <= (max - min); i++)
{
arr[i] = min + i;
}
return (arr);
}
