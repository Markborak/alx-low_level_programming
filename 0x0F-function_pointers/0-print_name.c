#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - funtion that prints a name
 *
 * @name: Pararmter
 *
 * @f: parameter
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

void print_name_callback(char *name)
{
printf("Name: %s\n", name);
}
