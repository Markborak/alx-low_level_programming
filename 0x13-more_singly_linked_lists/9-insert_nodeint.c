#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * in a listint_t linked list.
 *
 * @head: pointer to the pointer of the head of listint_t list
 *
 * @idx: index of the list where the new node should be added (starting from 0)
 *
 * @n: value to be added to the new node
 *
 * Return: The address of the new node (listint_t*), or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
listint_t *new_node = malloc(sizeof(listint_t));
unsigned int position = 0;
if (idx == 0)
{
return (add_nodeint(head, n));
}
/*listint_t *current = *head;*/
/*unsigned int position = 0;*/
while (current != NULL && position < idx - 1)
{
current = current->next;
position++;
}
if (current == NULL || position < idx - 1)
{
return (NULL);
}
/*listint_t *new_node = malloc(sizeof(listint_t));*/
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}


/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 *
 * @head: double pointer to the head of listint_t list
 *
 * @n: value to be added to the new node
 *
 * Return: Always new node at the beginning (success)
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
