#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - funtion returns number of elements in a string
 *
 * @h: Pointer to the head of list_t list
 *
 * Return: Always number of nodes (success)
 */

size_t list_len(const list_t *h)
{
unsigned int node_count = 0;
while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}
