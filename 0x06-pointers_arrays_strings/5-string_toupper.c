#include "main.h"
/**
 * string_toupper - function changes lowercase letters of string to uppercase.
 *
 * @str: Parameter
 *
 * Return: Always str (success)
 */
char *string_toupper(char *str)
{
char *ptr = str;
for (; *ptr != '\0'; ptr++)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = (*ptr - ('a' - 'A'));
}
}
return (str);
}
