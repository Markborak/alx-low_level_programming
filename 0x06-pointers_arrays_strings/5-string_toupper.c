#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 *
 * @str: Parameter
 */
char *string_toupper(char *str)
{
char *ptr = str;
for (*ptr = 0; *ptr != '\0'; ptr++)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = (*ptr - ('a' - 'A'));	
}
}
return (str);
}
