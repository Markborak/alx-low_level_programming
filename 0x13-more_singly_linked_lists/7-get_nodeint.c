#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns nth node of listint_t list
 *
 * @head: pointer to the head of listint_t
 *
 * @index: index of the node starting from 0
 *
 * Return: Always nth node of listint_t (success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int position = 0;
while (head != NULL)
{
if (position == index)
{
return (head);
}
head = head->next;
position++;
}
return (NULL);
}
