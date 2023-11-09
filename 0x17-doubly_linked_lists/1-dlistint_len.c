#include "lists.h"
/**
 * dlistint_len - prints all elements of a listint_t list
 * @h: pointer to head of dlist
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
