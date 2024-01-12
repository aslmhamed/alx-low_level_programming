#include "lists.h"
/**
 * print_dlistint - prints the number of nodes.
 * @h: head of the list.
 *
 * Return: the number of elements.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		print("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
