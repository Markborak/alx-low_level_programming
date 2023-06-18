#include <stdio.h>
/**
 * main - Program that prints double digits in twos
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
if ((i != 98 || j != 99) && i % 10 <= j % 10)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
