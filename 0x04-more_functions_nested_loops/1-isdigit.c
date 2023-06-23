#include "main.h"
/**
 * _isdigit - Checks for a digit
 *
 * @c: Parameter
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
