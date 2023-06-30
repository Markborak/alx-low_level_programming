#include "main.h"
/**
 * leet - encodes a string
 *
 * @str: Parameter
 *
 * Return: Always str (success)
 *
 */
char *leet(char *str)
{
char *ptr = str;
char *leetchars = "aAeEoOtTlL";
char *leetnums = "4433007711";
int i;
int j;
for (; *ptr != '\0'; ptr++)
{
for (i = 0, j = 0; leetchars[i] != '\0'; i++, j++)
{
if (*ptr == leetchars[i])
{
*ptr = leetnums[j];
}
}
}
return (str);
}
