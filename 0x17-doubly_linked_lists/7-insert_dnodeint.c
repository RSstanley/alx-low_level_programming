#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at nth position of list
 * @h: pointer to head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current = *h;
	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = current->next;
			current->next = new;
			new->prev = current;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	free(new);
	return (NULL);
}
