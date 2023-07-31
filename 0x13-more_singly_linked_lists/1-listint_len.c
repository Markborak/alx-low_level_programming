#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - function returns no of elements in linked list listint_t
 *
 * @h: pointer to the head of listint_t
 *
 * Return: Always number of elements (success)
 */

size_t listint_len(const listint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
