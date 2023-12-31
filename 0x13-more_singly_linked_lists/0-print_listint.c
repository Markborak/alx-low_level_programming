#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - function prints all elements of listint_t list
 *
 * @h: pointer to the head of listint_t list
 *
 * Return: Always number of nodes (success)
 */
size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
