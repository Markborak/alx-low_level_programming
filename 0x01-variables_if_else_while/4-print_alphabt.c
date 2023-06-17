#include <stdio.h>
/**
 * main - Programe prints all lowercase letters except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
putchar('\n');
return (0);
}
