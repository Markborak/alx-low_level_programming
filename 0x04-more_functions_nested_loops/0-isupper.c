#include "main.h"
/**
 * _isupper - Checks uppercase
 *@c: Parameter
 * Return: Always 1 (success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
