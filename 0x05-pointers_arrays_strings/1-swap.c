#include "main.h"
/**
 * swap_int - function that swaps two integers
 *
 * @a: Parameter
 *
 * @b: Parameter
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
