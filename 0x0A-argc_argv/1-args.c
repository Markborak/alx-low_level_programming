#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
int i;
(void)argv;

for (i = 0; i < argc - 1; i++)
{
}
printf("%d\n", i);

return (0);
}
