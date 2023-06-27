#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: Parameter
 *
 * @src: Parameter
 *
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j = strlen(src);
for (i = 0; i <= j; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
