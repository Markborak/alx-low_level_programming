#include "main.h"
/**
 * _strlen_recursion - functio that returns length of a string
 *
 * @s: string
 *
 * Return: Always string length (success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}
