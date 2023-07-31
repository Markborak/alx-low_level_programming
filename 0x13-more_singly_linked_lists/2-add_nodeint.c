#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function adds a new node at the beginning of listint_t list
 *
 * @head: double pointer to the head of listint_t
 *
 * @n: value to be added to the new node
 *
 * Return: Always new node (success)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
