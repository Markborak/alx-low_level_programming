#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of listint_t list
 *
 * @head: double pointer to the head of listint_t list
 *
 * @n: value to be added to the new node
 *
 * Return: Always new node at the end (success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current = *head;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
/*listint_t *current = *head;*/
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
return (new_node);
}
