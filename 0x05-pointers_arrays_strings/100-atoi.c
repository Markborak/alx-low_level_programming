#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: Parameter
 *
 * Return: Always sign *result
 */
int _atoi(char *s)
{

int result = 0;
int i = 0;
int sign = 1;
while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
i++;

while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
{
sign *= (s[i] == '-') ? -1 : 1;
i++;
}
while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
{
if (result > (INT_MAX / 10) ||
(result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
{
return ((sign == -1) ? INT_MIN : INT_MAX);
}
result = (result * 10) + (s[i] - '0');
i++;
}
return (sign *result);
}
