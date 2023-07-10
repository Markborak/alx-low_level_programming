#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a new string which is duplicate of string str
 *
 * @str: string parameter
 *
 * Return: Always pointer duplicate of str (success)
 */
char *_strdup(char *str)
{
unsigned int len;
char *dup;
if (str == NULL)
{
return (NULL);
}
len = strlen(str) + 1;
dup = malloc(len);
if (dup != NULL)
{
memcpy(dup, str, len);
}
return (dup);
}
