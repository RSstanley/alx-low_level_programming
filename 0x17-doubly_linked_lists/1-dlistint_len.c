#include "lists.h"
/**
 * dlistint_len - finds number of nodes in list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
