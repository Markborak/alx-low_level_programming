#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string of charcters
 *
 * @c: character in string s
 *
 * Return: Always s (sucess)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&(s[i]));
}

}
return (NULL);
}
