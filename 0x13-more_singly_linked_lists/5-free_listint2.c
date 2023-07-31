#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint2 - function that frees listint_t list
 *
 * @head: double pointer to the head of listint_t list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
while (head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}
