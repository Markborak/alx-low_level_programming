#include "main.h"
/**
 * print_rev - Prints a string, in reverse
 *
 * @s: Parameter
 */
void print_rev(char *s)
{


int i;
int j = _strlen(s);
for (j = 0; s[j] != '\0'; j++)
{
}
for (i = j - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');

}
