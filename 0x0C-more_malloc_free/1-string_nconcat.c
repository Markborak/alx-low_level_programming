#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: destination  string
 *
 * @s2: string to be concatenated
 *
 * Return: Always 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr = (char *) malloc(strlen(s1) + n + 1);
unsigned int s1_len = strlen(s1);
unsigned int s2_len = strlen(s2);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (ptr == NULL)
{
return (NULL);
}
if (n >= s2_len)
{
n = s2_len;
}
memcpy(ptr, s1, s1_len);
memcpy(ptr + s1_len, s2, n);
ptr[s1_len + n] = '\0';
return (ptr);
}
