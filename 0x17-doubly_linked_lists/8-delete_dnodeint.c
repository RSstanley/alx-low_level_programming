#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp1, *delete;

	temp1 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	for (i = 0; i < index - 1 && temp1; i++)
		temp1 = temp1->next;

	if (temp1->next == NULL || temp1 == NULL)
		return (-1);

	delete = temp1->next;
	temp1->next = delete->next;
	free(delete);
	return (1);
}
