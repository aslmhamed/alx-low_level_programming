#include "lists.h"

/**
 * print_listint - Print the contact of a linked list
 *
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t dir = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		dir++;
	}
	return (dir);
}
