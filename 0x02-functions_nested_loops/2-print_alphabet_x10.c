#include <stdio.h>
/**
 *print_alphabet - Prototype function
 */
void print_alphabet(void);
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i <= 10; i++)
{
print_alphabet();
putchar('\n');
}
return (0);
}
/**
*print_alphabet - Function definition
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
}
