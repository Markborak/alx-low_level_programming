#include <stdio.h>
/**
 * main - All possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 10; i < 100; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
