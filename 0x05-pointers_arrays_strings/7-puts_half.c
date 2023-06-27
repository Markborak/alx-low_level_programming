#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half of a string
 *
 * @str: Parameter
 */
void puts_half(char *str)
{
int i = strlen(str);
int j = i / 2;
if (i % 2 != 0)
{
j = ((i - 1) / 2);
}
for (i = j; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
