#include <stdio.h>
/**
 * main -Serves as entry point of the programe which prints A to Z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
/* putchar('\n'); */
}
return (0);
}
