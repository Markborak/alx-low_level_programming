#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{

int num1;
int num2;
int result;

if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d", result);
}
else if (argc != 3)
{
printf("Error");
}

return (0);
}
