#include <main.h>
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
print_alphabet();
_putchar('\n');
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
_putchar(i);
}
}
