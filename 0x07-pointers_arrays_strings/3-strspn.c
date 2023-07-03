#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: memory segment
 *
 * @accept: Parameter
 *
 * Return: Always count (succes)
 */
unsigned int _strspn(char *s, char *accept)
{
int count;
for (count = 0; *s; s++, count++)
{
char *a = accept;
for (; *a; a++)
{
if (*s == *a)
break;
}
if (*s != *a)
{
return (count);
}
}
return (count);
}
