#include "lists.h"
/**
 * sum_dlistint - gets sum of all values in linked list
 * @head: pointer to head of list
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
