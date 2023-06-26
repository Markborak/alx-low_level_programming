#include "main.h"
/**
 * rev_string - Function that reverses a string
 *
 * @s: Parameter
 */
void rev_string(char *s)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}

for (j = 0; s[j] != '\0'; j++)
{
}
for (i = j - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
