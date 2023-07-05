#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: nutural square of a number
 *
 * sqrt_helper - serves as a recursive helper for _sqrt_recursion
 *
 * Return: Always sqrt (success)
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (sqrt_helper(n, 1, n));
}

int sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
if (start >= end)
{
return (start);
}
if (mid * mid > n)
{
return (sqrt_helper(n, start, mid - 1));
}
else
{
return (sqrt_helper(n, mid + 1, end));
}
}

