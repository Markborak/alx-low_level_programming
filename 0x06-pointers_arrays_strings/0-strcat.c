#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 *
 * @dest: Parameter
 *
 * @src: Parameter
 *
 * Return: Always dest (sucess)
 */
char *_strcat(char *dest, char *src)
{
int dest_len;
int i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
{
}
for (i =0; src[i] != '\0'; i++)
{
dest[dest_len] = src[i];
dest_len++;
}
dest[dest_len] = '\0';

return (dest);
}
