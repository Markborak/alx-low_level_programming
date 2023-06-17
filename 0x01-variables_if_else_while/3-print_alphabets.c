#include <stdio.h>
/**
 * main - Programe that prints alphabet in lower and upper case.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
