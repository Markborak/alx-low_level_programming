#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: Always str (success)
 */
char *str_concat(char *s1, char *s2)
{
unsigned int len = strlen(s1) + strlen(s2) + 1;
char *array;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
array = malloc(len);
if (array == NULL)
{
return (NULL);
}
strcat(array, s1);
strcat(array, s2);
return (array);
}
