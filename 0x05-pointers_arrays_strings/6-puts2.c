#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character,
 *
 * @str: Parameter
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != '1' && str[i] != '3' && str[i] != '5' && str[i] != '7' && str[i] != '9')
{

_putchar(str[i]);
}
}
_putchar('\n');
}
