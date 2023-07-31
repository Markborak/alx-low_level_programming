#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint - function frees listint_t list
 *
 * @head: pointer to the head of listint_t list
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
/*free(temp->str);*/
free(temp);
}
}
