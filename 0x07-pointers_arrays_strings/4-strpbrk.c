#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string
 *
 * @accept: string argument
 *
 * Return: return poinert to s if found else returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
int j;
int i;
for  (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])

return (s + i);
}
}
return (NULL);
}
