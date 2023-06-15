#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to head of list
 * @index: index to get
 * Return: pointer to node at nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
