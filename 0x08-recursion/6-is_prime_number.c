#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 *
 * @n: Parameter
 *
 * is_prime_helper - helper to is_prime_number
 *
 *@i: Parameter
 *
 * Return: Always 1 (success)
 */
int is_prime_helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
