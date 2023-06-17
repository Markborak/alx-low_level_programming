#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Serves as the entry point of the program.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n = rand() - RAND_MAX / 2;
int lastdigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (lastdigit > 5)
{
printf("last digit of %d is %d\n and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastdigit < 6 && lastdigit != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
