#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: Parameter
 *
 * @src: Parameter
 *
 * @n: Parameter
 *
 * Return:Always dest (success)
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len;
int i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
{
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[dest_len] = src[i];
dest_len++;
}
return (dest);
}
