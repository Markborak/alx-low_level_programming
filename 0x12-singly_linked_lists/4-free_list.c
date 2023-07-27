#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_list - function frees list_t list
 *
 * @head: pointer to the head of list_t list
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
