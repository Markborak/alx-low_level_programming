#include "main.h"

/**
 * rev_string - Function that reverses a string
 *
 * @s: Parameter
 */
void rev_string(char *s)
{
int i, j;
char temp;

for (j = 0; s[j] != '\0'; j++)
{
}

j--;

for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

