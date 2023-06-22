#include <stdio.h>
#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
/**
 * main - Entry point of code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a = 972;
int b = -98;
int c = 0;
int largest = largest_number(a, b, c);

printf("%d\n", largest);
printf("\n");
return (0);
}
