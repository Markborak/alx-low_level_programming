#include <stdio.h>
/**
 * main - Program that prints all posible three digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 0; i <= 7; i++)
{
putchar(i + '0');
for (j = i + 1; j <= 8; j++)
{
putchar(j + '0');
for (k = j + 1; k <= 9; k++)
{
putchar(k +  '0');
if (i != 7 && j != 8 && k != 9)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
