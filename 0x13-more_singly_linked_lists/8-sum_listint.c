#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of a listint_t
 *
 * @head: pointer to the head of listint_t list
 *
 * Return: The sum of all the data (int), or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
