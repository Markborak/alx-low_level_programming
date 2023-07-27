#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function prints elements of a list_t list
 *
 * @h: Pointer to the head of list_t list
 *
 * Return: Always number of nodes (success)
 */

size_t print_list(const list_t *h)
{
unsigned int node_count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
	printf("[0] (nil)\n");
}
else
{
	printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
node_count++;
}
return (node_count);
}
