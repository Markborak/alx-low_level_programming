#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function deletes the node at a given index
 *                           in a listint_t linked list.
 *
 * @head: pointer to the pointer of the head of listint_t list
 *
 * @index: index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *temp = current->next;
unsigned int position = 0;
if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

/*listint_t *current = *head;*/
/*unsigned int position = 0;*/

while (current != NULL && position < index - 1)
{
current = current->next;
position++;
}

if (current == NULL || current->next == NULL)
{
return (-1);
}

/*listint_t *temp = current->next;*/
current->next = temp->next;
free(temp);

return (1);
}

