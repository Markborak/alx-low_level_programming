#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head of a node of listint_t list
 *
 * @head: double pointer to the head of listint_t
 *
 * Return: Always the heads node nodes data(n) (success)
 */

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int data = temp->n;
if (*head == NULL)
{
return (0);
}
*head = (*head)->next;
free(temp);
return (data);
}
