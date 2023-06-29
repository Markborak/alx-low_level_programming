#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that copies a string.
 *
 * @dest: Parametr
 *
 * @src: Parameter
 *
 * @n: Parameter
 *
 * Return: Always dest (success)
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
