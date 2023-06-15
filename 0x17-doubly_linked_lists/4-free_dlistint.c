#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
