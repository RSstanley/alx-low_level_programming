#include "lists.h"
/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (temp)
	{
		if (temp->next == NULL)
		{
			new->n = n;
			temp->next = new;
			new->next = NULL;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
